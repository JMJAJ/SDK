#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AkEvent

#include "Basic.hpp"

#include "HottaFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0050 (0x0090 - 0x0040)
class UAnimNotify_AkEvent_C final : public UAnimNotify_HottaAKEvent
{
public:
	class UAkAudioEvent*                          Event;                                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          WeaponEvent;                                       // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WeaponEventRate;                                   // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55FF[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Attach_Name;                                       // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Follow;                                            // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5600[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventName;                                         // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          LocalClient;                                       // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5601[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CoolDownTime;                                      // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EventCoolDownTime;                                 // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayInBreakFate;                                   // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_AkEvent_C">();
	}
	static class UAnimNotify_AkEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_AkEvent_C>();
	}
};
static_assert(alignof(UAnimNotify_AkEvent_C) == 0x000008, "Wrong alignment on UAnimNotify_AkEvent_C");
static_assert(sizeof(UAnimNotify_AkEvent_C) == 0x000090, "Wrong size on UAnimNotify_AkEvent_C");
static_assert(offsetof(UAnimNotify_AkEvent_C, Event) == 0x000040, "Member 'UAnimNotify_AkEvent_C::Event' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, WeaponEvent) == 0x000048, "Member 'UAnimNotify_AkEvent_C::WeaponEvent' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, WeaponEventRate) == 0x000050, "Member 'UAnimNotify_AkEvent_C::WeaponEventRate' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, Attach_Name) == 0x000058, "Member 'UAnimNotify_AkEvent_C::Attach_Name' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, Follow) == 0x000068, "Member 'UAnimNotify_AkEvent_C::Follow' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, EventName) == 0x000070, "Member 'UAnimNotify_AkEvent_C::EventName' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, LocalClient) == 0x000080, "Member 'UAnimNotify_AkEvent_C::LocalClient' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, CoolDownTime) == 0x000084, "Member 'UAnimNotify_AkEvent_C::CoolDownTime' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, EventCoolDownTime) == 0x000088, "Member 'UAnimNotify_AkEvent_C::EventCoolDownTime' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, PlayInBreakFate) == 0x00008C, "Member 'UAnimNotify_AkEvent_C::PlayInBreakFate' has a wrong offset!");

}

