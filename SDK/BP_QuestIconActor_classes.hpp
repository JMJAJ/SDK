#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestIconActor

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QuestIconActor.BP_QuestIconActor_C
// 0x0000 (0x0310 - 0x0310)
class ABP_QuestIconActor_C final : public AQRSLQuestMapIconActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestIconActor_C">();
	}
	static class ABP_QuestIconActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_QuestIconActor_C>();
	}
};
static_assert(alignof(ABP_QuestIconActor_C) == 0x000008, "Wrong alignment on ABP_QuestIconActor_C");
static_assert(sizeof(ABP_QuestIconActor_C) == 0x000310, "Wrong size on ABP_QuestIconActor_C");

}

