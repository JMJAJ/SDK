#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TargetType_LockBoxBase

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TargetType_LockBoxBase.BP_TargetType_LockBoxBase_C
// 0x0000 (0x00E8 - 0x00E8)
class UBP_TargetType_LockBoxBase_C : public UHotttaTargetType_BoxTraceBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TargetType_LockBoxBase_C">();
	}
	static class UBP_TargetType_LockBoxBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TargetType_LockBoxBase_C>();
	}
};
static_assert(alignof(UBP_TargetType_LockBoxBase_C) == 0x000008, "Wrong alignment on UBP_TargetType_LockBoxBase_C");
static_assert(sizeof(UBP_TargetType_LockBoxBase_C) == 0x0000E8, "Wrong size on UBP_TargetType_LockBoxBase_C");

}

