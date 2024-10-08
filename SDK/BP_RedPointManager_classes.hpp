#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RedPointManager

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RedPointManager.BP_RedPointManager_C
// 0x0000 (0x0178 - 0x0178)
class UBP_RedPointManager_C final : public UHottaRedPointManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RedPointManager_C">();
	}
	static class UBP_RedPointManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RedPointManager_C>();
	}
};
static_assert(alignof(UBP_RedPointManager_C) == 0x000008, "Wrong alignment on UBP_RedPointManager_C");
static_assert(sizeof(UBP_RedPointManager_C) == 0x000178, "Wrong size on UBP_RedPointManager_C");

}

