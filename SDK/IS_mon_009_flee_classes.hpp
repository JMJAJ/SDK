#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IS_mon_009_flee

#include "Basic.hpp"

#include "IdleStateHitFleeBP_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IS_mon_009_flee.IS_mon_009_flee_C
// 0x0000 (0x0230 - 0x0230)
class UIS_mon_009_flee_C final : public UIdleStateHitFleeBP_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IS_mon_009_flee_C">();
	}
	static class UIS_mon_009_flee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIS_mon_009_flee_C>();
	}
};
static_assert(alignof(UIS_mon_009_flee_C) == 0x000008, "Wrong alignment on UIS_mon_009_flee_C");
static_assert(sizeof(UIS_mon_009_flee_C) == 0x000230, "Wrong size on UIS_mon_009_flee_C");

}

