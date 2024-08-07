#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarkRobAniBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "HottaFramework_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MarkRobAniBP.MarkRobAniBP_C
// 0x0300 (0x05C0 - 0x02C0)
class UMarkRobAniBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_5970[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0320(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0348(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x03C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03F8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0478(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x04A8(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0558(0x0048)()
	EWeaponAnimState                              WeaponAnimationState;                              // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5971[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           EnterActiveMontage;                                // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LeaveActiveMontage;                                // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MarkRobAniBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MarkRobAniBP_AnimGraphNode_TransitionResult_303FEAB841E44662878EC7989A857223();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MarkRobAniBP_AnimGraphNode_TransitionResult_B710D0024A42E624223B4291F14F4A7B();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarkRobAniBP_C">();
	}
	static class UMarkRobAniBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarkRobAniBP_C>();
	}
};
static_assert(alignof(UMarkRobAniBP_C) == 0x000010, "Wrong alignment on UMarkRobAniBP_C");
static_assert(sizeof(UMarkRobAniBP_C) == 0x0005C0, "Wrong size on UMarkRobAniBP_C");
static_assert(offsetof(UMarkRobAniBP_C, UberGraphFrame) == 0x0002C0, "Member 'UMarkRobAniBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UMarkRobAniBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_TransitionResult_1) == 0x0002F8, "Member 'UMarkRobAniBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_TransitionResult) == 0x000320, "Member 'UMarkRobAniBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_SequencePlayer_1) == 0x000348, "Member 'UMarkRobAniBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_StateResult_1) == 0x0003C8, "Member 'UMarkRobAniBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_SequencePlayer) == 0x0003F8, "Member 'UMarkRobAniBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_StateResult) == 0x000478, "Member 'UMarkRobAniBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_StateMachine) == 0x0004A8, "Member 'UMarkRobAniBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, AnimGraphNode_Slot) == 0x000558, "Member 'UMarkRobAniBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, WeaponAnimationState) == 0x0005A0, "Member 'UMarkRobAniBP_C::WeaponAnimationState' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, EnterActiveMontage) == 0x0005A8, "Member 'UMarkRobAniBP_C::EnterActiveMontage' has a wrong offset!");
static_assert(offsetof(UMarkRobAniBP_C, LeaveActiveMontage) == 0x0005B0, "Member 'UMarkRobAniBP_C::LeaveActiveMontage' has a wrong offset!");

}

