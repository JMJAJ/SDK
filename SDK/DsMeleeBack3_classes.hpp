#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DsMeleeBack3

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DsMeleeBack3.DsMeleeBack3_C
// 0x0000 (0x0168 - 0x0168)
class UDsMeleeBack3_C final : public UHottaSkillEffect_HitBack
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DsMeleeBack3_C">();
	}
	static class UDsMeleeBack3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDsMeleeBack3_C>();
	}
};
static_assert(alignof(UDsMeleeBack3_C) == 0x000008, "Wrong alignment on UDsMeleeBack3_C");
static_assert(sizeof(UDsMeleeBack3_C) == 0x000168, "Wrong size on UDsMeleeBack3_C");

}

