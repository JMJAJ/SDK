#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavArea_Road

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavArea_Road.NavArea_Road_C
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Road_C final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavArea_Road_C">();
	}
	static class UNavArea_Road_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_Road_C>();
	}
};
static_assert(alignof(UNavArea_Road_C) == 0x000008, "Wrong alignment on UNavArea_Road_C");
static_assert(sizeof(UNavArea_Road_C) == 0x000048, "Wrong size on UNavArea_Road_C");

}

