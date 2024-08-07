#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameNative

#include "Basic.hpp"

#include "GameNative_structs.hpp"


namespace SDK::Params
{

// Function GameNative.INTLGameNativeAPI.Close
// 0x0004 (0x0004 - 0x0000)
struct INTLGameNativeAPI_Close final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_Close) == 0x000004, "Wrong alignment on INTLGameNativeAPI_Close");
static_assert(sizeof(INTLGameNativeAPI_Close) == 0x000004, "Wrong size on INTLGameNativeAPI_Close");
static_assert(offsetof(INTLGameNativeAPI_Close, ReturnValue) == 0x000000, "Member 'INTLGameNativeAPI_Close::ReturnValue' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.CmdToGameNative
// 0x0018 (0x0018 - 0x0000)
struct INTLGameNativeAPI_CmdToGameNative final
{
public:
	class FString                                 JsonMsg;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A3[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(INTLGameNativeAPI_CmdToGameNative) == 0x000008, "Wrong alignment on INTLGameNativeAPI_CmdToGameNative");
static_assert(sizeof(INTLGameNativeAPI_CmdToGameNative) == 0x000018, "Wrong size on INTLGameNativeAPI_CmdToGameNative");
static_assert(offsetof(INTLGameNativeAPI_CmdToGameNative, JsonMsg) == 0x000000, "Member 'INTLGameNativeAPI_CmdToGameNative::JsonMsg' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_CmdToGameNative, ReturnValue) == 0x000010, "Member 'INTLGameNativeAPI_CmdToGameNative::ReturnValue' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.InformGameEvent
// 0x0020 (0x0020 - 0x0000)
struct INTLGameNativeAPI_InformGameEvent final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExtraParams;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_InformGameEvent) == 0x000008, "Wrong alignment on INTLGameNativeAPI_InformGameEvent");
static_assert(sizeof(INTLGameNativeAPI_InformGameEvent) == 0x000020, "Wrong size on INTLGameNativeAPI_InformGameEvent");
static_assert(offsetof(INTLGameNativeAPI_InformGameEvent, EventName) == 0x000000, "Member 'INTLGameNativeAPI_InformGameEvent::EventName' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_InformGameEvent, ExtraParams) == 0x000010, "Member 'INTLGameNativeAPI_InformGameEvent::ExtraParams' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.Init
// 0x0038 (0x0038 - 0x0000)
struct INTLGameNativeAPI_Init final
{
public:
	class UGameInstance*                          Instance;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Host;                                              // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsTest;                                            // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultActivity;                                   // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A5[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(INTLGameNativeAPI_Init) == 0x000008, "Wrong alignment on INTLGameNativeAPI_Init");
static_assert(sizeof(INTLGameNativeAPI_Init) == 0x000038, "Wrong size on INTLGameNativeAPI_Init");
static_assert(offsetof(INTLGameNativeAPI_Init, Instance) == 0x000000, "Member 'INTLGameNativeAPI_Init::Instance' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_Init, Host) == 0x000008, "Member 'INTLGameNativeAPI_Init::Host' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_Init, IsTest) == 0x000018, "Member 'INTLGameNativeAPI_Init::IsTest' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_Init, DefaultActivity) == 0x000020, "Member 'INTLGameNativeAPI_Init::DefaultActivity' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_Init, ReturnValue) == 0x000030, "Member 'INTLGameNativeAPI_Init::ReturnValue' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.IsPopPanelAllowedResult
// 0x0028 (0x0028 - 0x0000)
struct INTLGameNativeAPI_IsPopPanelAllowedResult final
{
public:
	class FString                                 ModuleName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Allowed;                                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ActivityClassification;                            // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_IsPopPanelAllowedResult) == 0x000008, "Wrong alignment on INTLGameNativeAPI_IsPopPanelAllowedResult");
static_assert(sizeof(INTLGameNativeAPI_IsPopPanelAllowedResult) == 0x000028, "Wrong size on INTLGameNativeAPI_IsPopPanelAllowedResult");
static_assert(offsetof(INTLGameNativeAPI_IsPopPanelAllowedResult, ModuleName) == 0x000000, "Member 'INTLGameNativeAPI_IsPopPanelAllowedResult::ModuleName' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_IsPopPanelAllowedResult, Allowed) == 0x000010, "Member 'INTLGameNativeAPI_IsPopPanelAllowedResult::Allowed' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_IsPopPanelAllowedResult, ActivityClassification) == 0x000018, "Member 'INTLGameNativeAPI_IsPopPanelAllowedResult::ActivityClassification' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.NotifyGameTaskCompleted
// 0x0020 (0x0020 - 0x0000)
struct INTLGameNativeAPI_NotifyGameTaskCompleted final
{
public:
	class FString                                 TaskName;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExtraParams;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_NotifyGameTaskCompleted) == 0x000008, "Wrong alignment on INTLGameNativeAPI_NotifyGameTaskCompleted");
static_assert(sizeof(INTLGameNativeAPI_NotifyGameTaskCompleted) == 0x000020, "Wrong size on INTLGameNativeAPI_NotifyGameTaskCompleted");
static_assert(offsetof(INTLGameNativeAPI_NotifyGameTaskCompleted, TaskName) == 0x000000, "Member 'INTLGameNativeAPI_NotifyGameTaskCompleted::TaskName' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_NotifyGameTaskCompleted, ExtraParams) == 0x000010, "Member 'INTLGameNativeAPI_NotifyGameTaskCompleted::ExtraParams' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.SetUserData
// 0x00F0 (0x00F0 - 0x0000)
struct INTLGameNativeAPI_SetUserData final
{
public:
	struct FINTLUserData                          UserData;                                          // 0x0000(0x00E8)(Parm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x00E8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A7[0x4];                                     // 0x00EC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(INTLGameNativeAPI_SetUserData) == 0x000008, "Wrong alignment on INTLGameNativeAPI_SetUserData");
static_assert(sizeof(INTLGameNativeAPI_SetUserData) == 0x0000F0, "Wrong size on INTLGameNativeAPI_SetUserData");
static_assert(offsetof(INTLGameNativeAPI_SetUserData, UserData) == 0x000000, "Member 'INTLGameNativeAPI_SetUserData::UserData' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_SetUserData, ReturnValue) == 0x0000E8, "Member 'INTLGameNativeAPI_SetUserData::ReturnValue' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.ShareResult
// 0x0028 (0x0028 - 0x0000)
struct INTLGameNativeAPI_ShareResult final
{
public:
	class FString                                 ShareType;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ModuleName;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Success;                                           // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19A8[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(INTLGameNativeAPI_ShareResult) == 0x000008, "Wrong alignment on INTLGameNativeAPI_ShareResult");
static_assert(sizeof(INTLGameNativeAPI_ShareResult) == 0x000028, "Wrong size on INTLGameNativeAPI_ShareResult");
static_assert(offsetof(INTLGameNativeAPI_ShareResult, ShareType) == 0x000000, "Member 'INTLGameNativeAPI_ShareResult::ShareType' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_ShareResult, ModuleName) == 0x000010, "Member 'INTLGameNativeAPI_ShareResult::ModuleName' has a wrong offset!");
static_assert(offsetof(INTLGameNativeAPI_ShareResult, Success) == 0x000020, "Member 'INTLGameNativeAPI_ShareResult::Success' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.Start
// 0x0004 (0x0004 - 0x0000)
struct INTLGameNativeAPI_Start final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_Start) == 0x000004, "Wrong alignment on INTLGameNativeAPI_Start");
static_assert(sizeof(INTLGameNativeAPI_Start) == 0x000004, "Wrong size on INTLGameNativeAPI_Start");
static_assert(offsetof(INTLGameNativeAPI_Start, ReturnValue) == 0x000000, "Member 'INTLGameNativeAPI_Start::ReturnValue' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.UpdatePlayerLevel
// 0x0004 (0x0004 - 0x0000)
struct INTLGameNativeAPI_UpdatePlayerLevel final
{
public:
	int32                                         PlayerLevel;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_UpdatePlayerLevel) == 0x000004, "Wrong alignment on INTLGameNativeAPI_UpdatePlayerLevel");
static_assert(sizeof(INTLGameNativeAPI_UpdatePlayerLevel) == 0x000004, "Wrong size on INTLGameNativeAPI_UpdatePlayerLevel");
static_assert(offsetof(INTLGameNativeAPI_UpdatePlayerLevel, PlayerLevel) == 0x000000, "Member 'INTLGameNativeAPI_UpdatePlayerLevel::PlayerLevel' has a wrong offset!");

// Function GameNative.INTLGameNativeAPI.WhetherDeviceIsAvailable
// 0x0001 (0x0001 - 0x0000)
struct INTLGameNativeAPI_WhetherDeviceIsAvailable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLGameNativeAPI_WhetherDeviceIsAvailable) == 0x000001, "Wrong alignment on INTLGameNativeAPI_WhetherDeviceIsAvailable");
static_assert(sizeof(INTLGameNativeAPI_WhetherDeviceIsAvailable) == 0x000001, "Wrong size on INTLGameNativeAPI_WhetherDeviceIsAvailable");
static_assert(offsetof(INTLGameNativeAPI_WhetherDeviceIsAvailable, ReturnValue) == 0x000000, "Member 'INTLGameNativeAPI_WhetherDeviceIsAvailable::ReturnValue' has a wrong offset!");

}

