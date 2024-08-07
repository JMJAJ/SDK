#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPA_Water_BP

#include "Basic.hpp"

#include "FPA_Base_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FPA_Water_BP.FPA_Water_BP_C
// 0x0000 (0x02A8 - 0x02A8)
class AFPA_Water_BP_C final : public AFPA_Base_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FPA_Water_BP_C">();
	}
	static class AFPA_Water_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFPA_Water_BP_C>();
	}
};
static_assert(alignof(AFPA_Water_BP_C) == 0x000008, "Wrong alignment on AFPA_Water_BP_C");
static_assert(sizeof(AFPA_Water_BP_C) == 0x0002A8, "Wrong size on AFPA_Water_BP_C");

}

