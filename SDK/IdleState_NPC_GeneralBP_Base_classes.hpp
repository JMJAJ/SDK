#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IdleState_NPC_GeneralBP_Base

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IdleState_NPC_GeneralBP_Base.IdleState_NPC_GeneralBP_Base_C
// 0x0000 (0x0228 - 0x0228)
class UIdleState_NPC_GeneralBP_Base_C final : public UHottaAIIdleStateBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IdleState_NPC_GeneralBP_Base_C">();
	}
	static class UIdleState_NPC_GeneralBP_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIdleState_NPC_GeneralBP_Base_C>();
	}
};
static_assert(alignof(UIdleState_NPC_GeneralBP_Base_C) == 0x000008, "Wrong alignment on UIdleState_NPC_GeneralBP_Base_C");
static_assert(sizeof(UIdleState_NPC_GeneralBP_Base_C) == 0x000228, "Wrong size on UIdleState_NPC_GeneralBP_Base_C");

}

