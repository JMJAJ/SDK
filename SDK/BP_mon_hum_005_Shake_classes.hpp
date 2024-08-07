#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_mon_hum_005_Shake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_mon_hum_005_Shake.BP_mon_hum_005_Shake_C
// 0x0C20 (0x0EE0 - 0x02C0)
class UBP_mon_hum_005_Shake_C final : public UAnimInstance
{
public:
	uint8                                         Pad_5906[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x02C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x02F8(0x0118)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0410(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0430(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x0450(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x0558(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x0660(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0768(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0870(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0978(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0A80(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0B88(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0C90(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0D98(0x0108)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0EA0(0x0030)()
	float                                         BlendAlpha;                                        // 0x0ED0(0x0004)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PushScale;                                         // 0x0ED4(0x0004)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_mon_hum_005_Shake(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_E1C509C443410F21010F478A4D7AF6F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_29D67DBE4977ACB76C31369F545442FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_43A17DC94C0390467AD390AE5C672591();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_EC011BB64F79813229A1959AC8A3D57F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_ECE8EAD146A8243C0B30BBBD8E8E765C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_83D323244845F34916159E894138F835();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_18854AC2448BECA6E14B2DB4F595B412();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_B8AB9B9248FB87EFA234C3BC2F077F68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_1EF234A64B2907B5B7F817870D0B72A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_mon_hum_005_Shake_AnimGraphNode_ModifyBone_27E9E2024EB1320E932BC6BA8475FA50();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BoneShakeLayer(const struct FPoseLink& InPose, float Param_PushScale, float Param_BlendAlpha, struct FPoseLink* Param_BoneShakeLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_mon_hum_005_Shake_C">();
	}
	static class UBP_mon_hum_005_Shake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_mon_hum_005_Shake_C>();
	}
};
static_assert(alignof(UBP_mon_hum_005_Shake_C) == 0x000010, "Wrong alignment on UBP_mon_hum_005_Shake_C");
static_assert(sizeof(UBP_mon_hum_005_Shake_C) == 0x000EE0, "Wrong size on UBP_mon_hum_005_Shake_C");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, UberGraphFrame) == 0x0002C0, "Member 'UBP_mon_hum_005_Shake_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_Root_1) == 0x0002C8, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_LinkedInputPose) == 0x0002F8, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_LocalToComponentSpace) == 0x000410, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ComponentToLocalSpace) == 0x000430, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_9) == 0x000450, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_8) == 0x000558, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_7) == 0x000660, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_6) == 0x000768, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_5) == 0x000870, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_4) == 0x000978, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_3) == 0x000A80, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_2) == 0x000B88, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone_1) == 0x000C90, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_ModifyBone) == 0x000D98, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, AnimGraphNode_Root) == 0x000EA0, "Member 'UBP_mon_hum_005_Shake_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, BlendAlpha) == 0x000ED0, "Member 'UBP_mon_hum_005_Shake_C::BlendAlpha' has a wrong offset!");
static_assert(offsetof(UBP_mon_hum_005_Shake_C, PushScale) == 0x000ED4, "Member 'UBP_mon_hum_005_Shake_C::PushScale' has a wrong offset!");

}

