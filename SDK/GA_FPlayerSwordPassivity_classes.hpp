#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FPlayerSwordPassivity

#include "Basic.hpp"

#include "GA_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FPlayerSwordPassivity.GA_FPlayerSwordPassivity_C
// 0x0000 (0x0D00 - 0x0D00)
class UGA_FPlayerSwordPassivity_C final : public UGA_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FPlayerSwordPassivity_C">();
	}
	static class UGA_FPlayerSwordPassivity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FPlayerSwordPassivity_C>();
	}
};
static_assert(alignof(UGA_FPlayerSwordPassivity_C) == 0x000010, "Wrong alignment on UGA_FPlayerSwordPassivity_C");
static_assert(sizeof(UGA_FPlayerSwordPassivity_C) == 0x000D00, "Wrong size on UGA_FPlayerSwordPassivity_C");

}

