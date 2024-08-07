#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LevelTransferState

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LevelTransferState.BP_LevelTransferState_C
// 0x0000 (0x0230 - 0x0230)
class UBP_LevelTransferState_C final : public UQRSLCharacterLevelTransferState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelTransferState_C">();
	}
	static class UBP_LevelTransferState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LevelTransferState_C>();
	}
};
static_assert(alignof(UBP_LevelTransferState_C) == 0x000010, "Wrong alignment on UBP_LevelTransferState_C");
static_assert(sizeof(UBP_LevelTransferState_C) == 0x000230, "Wrong size on UBP_LevelTransferState_C");

}

