#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: buff_delay_2s

#include "Basic.hpp"

#include "GE_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass buff_delay_2s.buff_delay_2s_C
// 0x0000 (0x1050 - 0x1050)
class Ubuff_delay_2s_C final : public UGE_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"buff_delay_2s_C">();
	}
	static class Ubuff_delay_2s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubuff_delay_2s_C>();
	}
};
static_assert(alignof(Ubuff_delay_2s_C) == 0x000008, "Wrong alignment on Ubuff_delay_2s_C");
static_assert(sizeof(Ubuff_delay_2s_C) == 0x001050, "Wrong size on Ubuff_delay_2s_C");

}

