#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Controller_mon_hum_083

#include "Basic.hpp"

#include "MonsterControllerBP_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass controller_mon_hum_083.controller_mon_hum_083_C
// 0x0000 (0x05C0 - 0x05C0)
class AController_mon_hum_083_C final : public AMonsterControllerBP_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"controller_mon_hum_083_C">();
	}
	static class AController_mon_hum_083_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AController_mon_hum_083_C>();
	}
};
static_assert(alignof(AController_mon_hum_083_C) == 0x000008, "Wrong alignment on AController_mon_hum_083_C");
static_assert(sizeof(AController_mon_hum_083_C) == 0x0005C0, "Wrong size on AController_mon_hum_083_C");

}

