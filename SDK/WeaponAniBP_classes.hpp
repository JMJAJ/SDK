#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponAniBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "HottaFramework_structs.hpp"
#include "HottaFramework_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass WeaponAniBP.WeaponAniBP_C
// 0x08C0 (0x0B90 - 0x02D0)
class UWeaponAniBP_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0308(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0330(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0358(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0380(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x03A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x03D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0420(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0448(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0470(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0498(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0518(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0548(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x05C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x05F8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0678(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x06A8(0x00E8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0790(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0830(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x08B0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x08E0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0960(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0990(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0A10(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0A40(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0AF0(0x0048)()
	EWeaponAnimState                              WeaponAnimationState;                              // 0x0B38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57B6[0x7];                                     // 0x0B39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           EnterActiveMontage;                                // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LeaveActiveMontage;                                // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          ActiveStateAnim;                                   // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          IdleStateAnim;                                     // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          OwnerAimmingStateAnim;                             // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          OwnerSprintingStateAnim;                           // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          OwnerMovingStateAnim;                              // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LeaveAimmingMontage;                               // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          FanSuperStateAnim;                                 // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponAniBP(int32 EntryPoint);
	void BPOwnerCharacterStateChange(EOwnerCharacterState NewState, EOwnerCharacterState OldState);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_32856D19486A3A053733EDB0773E819B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_D4DBB560470C895453E9669FBF594E8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_DDC957E644E62ED87D4E48BD3ED139C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_22471C824CCEF8CF0BDE0F9D77808244();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_6098A03B42B0A4953DEF90A62C7B499E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_F13F17284B9BB805C5C648A0BE52F0D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_E50E1CFD4BB76C49FE38D5B24BCF13CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_901187F9441E5E8346BCEAB5EA1958F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_01682166409B3F51A2CD4181D5584C7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WeaponAniBP_AnimGraphNode_TransitionResult_9E3B62DE4AB5A3038356929BE83C1900();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponAniBP_C">();
	}
	static class UWeaponAniBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponAniBP_C>();
	}
};
static_assert(alignof(UWeaponAniBP_C) == 0x000010, "Wrong alignment on UWeaponAniBP_C");
static_assert(sizeof(UWeaponAniBP_C) == 0x000B90, "Wrong size on UWeaponAniBP_C");
static_assert(offsetof(UWeaponAniBP_C, UberGraphFrame) == 0x0002D0, "Member 'UWeaponAniBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UWeaponAniBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_9) == 0x000308, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_8) == 0x000330, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_7) == 0x000358, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_6) == 0x000380, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_5) == 0x0003A8, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_4) == 0x0003D0, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_3) == 0x0003F8, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_2) == 0x000420, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult_1) == 0x000448, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_TransitionResult) == 0x000470, "Member 'UWeaponAniBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_SequencePlayer_5) == 0x000498, "Member 'UWeaponAniBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateResult_5) == 0x000518, "Member 'UWeaponAniBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_SequencePlayer_4) == 0x000548, "Member 'UWeaponAniBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateResult_4) == 0x0005C8, "Member 'UWeaponAniBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_SequencePlayer_3) == 0x0005F8, "Member 'UWeaponAniBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateResult_3) == 0x000678, "Member 'UWeaponAniBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0006A8, "Member 'UWeaponAniBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_BlendListByBool) == 0x000790, "Member 'UWeaponAniBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_SequencePlayer_2) == 0x000830, "Member 'UWeaponAniBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateResult_2) == 0x0008B0, "Member 'UWeaponAniBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_SequencePlayer_1) == 0x0008E0, "Member 'UWeaponAniBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateResult_1) == 0x000960, "Member 'UWeaponAniBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_SequencePlayer) == 0x000990, "Member 'UWeaponAniBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateResult) == 0x000A10, "Member 'UWeaponAniBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_StateMachine) == 0x000A40, "Member 'UWeaponAniBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, AnimGraphNode_Slot) == 0x000AF0, "Member 'UWeaponAniBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, WeaponAnimationState) == 0x000B38, "Member 'UWeaponAniBP_C::WeaponAnimationState' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, EnterActiveMontage) == 0x000B40, "Member 'UWeaponAniBP_C::EnterActiveMontage' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, LeaveActiveMontage) == 0x000B48, "Member 'UWeaponAniBP_C::LeaveActiveMontage' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, ActiveStateAnim) == 0x000B50, "Member 'UWeaponAniBP_C::ActiveStateAnim' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, IdleStateAnim) == 0x000B58, "Member 'UWeaponAniBP_C::IdleStateAnim' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, OwnerAimmingStateAnim) == 0x000B60, "Member 'UWeaponAniBP_C::OwnerAimmingStateAnim' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, OwnerSprintingStateAnim) == 0x000B68, "Member 'UWeaponAniBP_C::OwnerSprintingStateAnim' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, OwnerMovingStateAnim) == 0x000B70, "Member 'UWeaponAniBP_C::OwnerMovingStateAnim' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, LeaveAimmingMontage) == 0x000B78, "Member 'UWeaponAniBP_C::LeaveAimmingMontage' has a wrong offset!");
static_assert(offsetof(UWeaponAniBP_C, FanSuperStateAnim) == 0x000B80, "Member 'UWeaponAniBP_C::FanSuperStateAnim' has a wrong offset!");

}

