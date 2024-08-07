#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SequenceState

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SequenceState.BP_SequenceState_C
// 0x0000 (0x0078 - 0x0078)
class UBP_SequenceState_C final : public UQRSLCharacterSequenceState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SequenceState_C">();
	}
	static class UBP_SequenceState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SequenceState_C>();
	}
};
static_assert(alignof(UBP_SequenceState_C) == 0x000008, "Wrong alignment on UBP_SequenceState_C");
static_assert(sizeof(UBP_SequenceState_C) == 0x000078, "Wrong size on UBP_SequenceState_C");

}

