#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Boar_Shake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Boar_Shake.SK_Boar_Shake_C
// 0x0C20 (0x0EE0 - 0x02C0)
class USK_Boar_Shake_C final : public UAnimInstance
{
public:
	uint8                                         Pad_580F[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
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
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_60B1C12F41D952F781407EB1973E941F();
	void ExecuteUbergraph_SK_Boar_Shake(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_39C495DF46E51DB072819CAD77761D41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_E38B29D64F7FDC185CADFBA6E20A5C84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_46B58A1A4DB6EC6FAA201BA0BE595939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_210B1FCB47845094ED7367880B3A7927();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_1AB5C0A6489B248C48D2398942C931A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_D02625A2405744F1C0669C94D5EA076F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_42CEDF8B40D4660CED9BC6B7DB1FCA97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_D912C4C343E6A3D75668F7BC3D1CAAA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Boar_Shake_AnimGraphNode_ModifyBone_D8C46FE147F166EFBBBCC2BB7F2B5B43();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BoneShakeLayer(const struct FPoseLink& InPose, float Param_PushScale, float Param_BlendAlpha, struct FPoseLink* Param_BoneShakeLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Boar_Shake_C">();
	}
	static class USK_Boar_Shake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Boar_Shake_C>();
	}
};
static_assert(alignof(USK_Boar_Shake_C) == 0x000010, "Wrong alignment on USK_Boar_Shake_C");
static_assert(sizeof(USK_Boar_Shake_C) == 0x000EE0, "Wrong size on USK_Boar_Shake_C");
static_assert(offsetof(USK_Boar_Shake_C, UberGraphFrame) == 0x0002C0, "Member 'USK_Boar_Shake_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_Root_1) == 0x0002C8, "Member 'USK_Boar_Shake_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_LinkedInputPose) == 0x0002F8, "Member 'USK_Boar_Shake_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_LocalToComponentSpace) == 0x000410, "Member 'USK_Boar_Shake_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ComponentToLocalSpace) == 0x000430, "Member 'USK_Boar_Shake_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_9) == 0x000450, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_8) == 0x000558, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_7) == 0x000660, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_6) == 0x000768, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_5) == 0x000870, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_4) == 0x000978, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_3) == 0x000A80, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_2) == 0x000B88, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone_1) == 0x000C90, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_ModifyBone) == 0x000D98, "Member 'USK_Boar_Shake_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, AnimGraphNode_Root) == 0x000EA0, "Member 'USK_Boar_Shake_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, BlendAlpha) == 0x000ED0, "Member 'USK_Boar_Shake_C::BlendAlpha' has a wrong offset!");
static_assert(offsetof(USK_Boar_Shake_C, PushScale) == 0x000ED4, "Member 'USK_Boar_Shake_C::PushScale' has a wrong offset!");

}

