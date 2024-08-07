#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EyeTracker

#include "Basic.hpp"

#include "EyeTracker_structs.hpp"


namespace SDK::Params
{

// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// 0x002C (0x002C - 0x0000)
struct EyeTrackerFunctionLibrary_GetGazeData final
{
public:
	struct FEyeTrackerGazeData                    OutGazeData;                                       // 0x0000(0x0028)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_536D[0x3];                                     // 0x0029(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(EyeTrackerFunctionLibrary_GetGazeData) == 0x000004, "Wrong alignment on EyeTrackerFunctionLibrary_GetGazeData");
static_assert(sizeof(EyeTrackerFunctionLibrary_GetGazeData) == 0x00002C, "Wrong size on EyeTrackerFunctionLibrary_GetGazeData");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetGazeData, OutGazeData) == 0x000000, "Member 'EyeTrackerFunctionLibrary_GetGazeData::OutGazeData' has a wrong offset!");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetGazeData, ReturnValue) == 0x000028, "Member 'EyeTrackerFunctionLibrary_GetGazeData::ReturnValue' has a wrong offset!");

// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// 0x0044 (0x0044 - 0x0000)
struct EyeTrackerFunctionLibrary_GetStereoGazeData final
{
public:
	struct FEyeTrackerStereoGazeData              OutGazeData;                                       // 0x0000(0x0040)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_536E[0x3];                                     // 0x0041(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(EyeTrackerFunctionLibrary_GetStereoGazeData) == 0x000004, "Wrong alignment on EyeTrackerFunctionLibrary_GetStereoGazeData");
static_assert(sizeof(EyeTrackerFunctionLibrary_GetStereoGazeData) == 0x000044, "Wrong size on EyeTrackerFunctionLibrary_GetStereoGazeData");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetStereoGazeData, OutGazeData) == 0x000000, "Member 'EyeTrackerFunctionLibrary_GetStereoGazeData::OutGazeData' has a wrong offset!");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetStereoGazeData, ReturnValue) == 0x000040, "Member 'EyeTrackerFunctionLibrary_GetStereoGazeData::ReturnValue' has a wrong offset!");

// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// 0x0001 (0x0001 - 0x0000)
struct EyeTrackerFunctionLibrary_IsEyeTrackerConnected final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EyeTrackerFunctionLibrary_IsEyeTrackerConnected) == 0x000001, "Wrong alignment on EyeTrackerFunctionLibrary_IsEyeTrackerConnected");
static_assert(sizeof(EyeTrackerFunctionLibrary_IsEyeTrackerConnected) == 0x000001, "Wrong size on EyeTrackerFunctionLibrary_IsEyeTrackerConnected");
static_assert(offsetof(EyeTrackerFunctionLibrary_IsEyeTrackerConnected, ReturnValue) == 0x000000, "Member 'EyeTrackerFunctionLibrary_IsEyeTrackerConnected::ReturnValue' has a wrong offset!");

// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// 0x0001 (0x0001 - 0x0000)
struct EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable) == 0x000001, "Wrong alignment on EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable");
static_assert(sizeof(EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable) == 0x000001, "Wrong size on EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable");
static_assert(offsetof(EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable, ReturnValue) == 0x000000, "Member 'EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable::ReturnValue' has a wrong offset!");

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// 0x0008 (0x0008 - 0x0000)
struct EyeTrackerFunctionLibrary_SetEyeTrackedPlayer final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EyeTrackerFunctionLibrary_SetEyeTrackedPlayer) == 0x000008, "Wrong alignment on EyeTrackerFunctionLibrary_SetEyeTrackedPlayer");
static_assert(sizeof(EyeTrackerFunctionLibrary_SetEyeTrackedPlayer) == 0x000008, "Wrong size on EyeTrackerFunctionLibrary_SetEyeTrackedPlayer");
static_assert(offsetof(EyeTrackerFunctionLibrary_SetEyeTrackedPlayer, PlayerController) == 0x000000, "Member 'EyeTrackerFunctionLibrary_SetEyeTrackedPlayer::PlayerController' has a wrong offset!");

}

