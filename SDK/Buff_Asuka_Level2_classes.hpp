#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_Asuka_Level2

#include "Basic.hpp"

#include "Buff_Asuka_Level1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_Asuka_Level2.Buff_Asuka_Level2_C
// 0x0000 (0x1050 - 0x1050)
class UBuff_Asuka_Level2_C final : public UBuff_Asuka_Level1_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_Asuka_Level2_C">();
	}
	static class UBuff_Asuka_Level2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_Asuka_Level2_C>();
	}
};
static_assert(alignof(UBuff_Asuka_Level2_C) == 0x000008, "Wrong alignment on UBuff_Asuka_Level2_C");
static_assert(sizeof(UBuff_Asuka_Level2_C) == 0x001050, "Wrong size on UBuff_Asuka_Level2_C");

}

