#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_player_Skeleton_AB_UI

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass f_player_Skeleton_AB_UI.f_player_Skeleton_AB_UI_C
// 0x5420 (0x6750 - 0x1330)
class UF_player_Skeleton_AB_UI_C final : public UQRSLAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1338(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_28;                       // 0x1358(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_27;                       // 0x1460(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_26;                       // 0x1568(0x0108)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_13;                    // 0x1670(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_12;                    // 0x1990(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_11;                    // 0x1CB0(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_10;                    // 0x1FD0(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_9;                     // 0x22F0(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0x2610(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x2930(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x2C50(0x0320)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2F70(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2F90(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_25;                       // 0x3010(0x0108)()
	uint8                                         Pad_565D[0x8];                                     // 0x3118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x3120(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x3440(0x0320)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_24;                       // 0x3760(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_23;                       // 0x3868(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_22;                       // 0x3970(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_21;                       // 0x3A78(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_20;                       // 0x3B80(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_19;                       // 0x3C88(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_18;                       // 0x3D90(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_17;                       // 0x3E98(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_16;                       // 0x3FA0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_15;                       // 0x40A8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_14;                       // 0x41B0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_13;                       // 0x42B8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_12;                       // 0x43C0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_11;                       // 0x44C8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_10;                       // 0x45D0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x46D8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x47E0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x48E8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x49F0(0x0108)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x4AF8(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x4B40(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x4C48(0x0108)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x4D50(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x5070(0x0320)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x5390(0x0108)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x5498(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x55F0(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x5618(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x5660(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x57B8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x57E0(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x58A0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x58C8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x5A20(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x5A48(0x0108)()
	struct FAnimNode_HottaBonesModify             AnimGraphNode_HottaBonesModify;                    // 0x5B50(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x5C50(0x0030)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x5C80(0x0320)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x5FA0(0x0320)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x62C0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x63C8(0x0108)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x64D0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x6570(0x0080)()
	struct FAnimNode_CustomBoneModify             AnimGraphNode_CustomBoneModify;                    // 0x65F0(0x00E8)()
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x66D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         DummyBoneLength;                                   // 0x66F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TeleportRotationThreshold;                         // 0x66F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Gravity;                                           // 0x66F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 PhysicsSettings_Chest;                             // 0x6704(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         DummyBoneLength_Chest;                             // 0x671C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                 PhysicsSettings_cope;                              // 0x6720(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 Physics_SettingsCope2;                             // 0x6738(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_f_player_Skeleton_AB_UI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"f_player_Skeleton_AB_UI_C">();
	}
	static class UF_player_Skeleton_AB_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_player_Skeleton_AB_UI_C>();
	}
};
static_assert(alignof(UF_player_Skeleton_AB_UI_C) == 0x000010, "Wrong alignment on UF_player_Skeleton_AB_UI_C");
static_assert(sizeof(UF_player_Skeleton_AB_UI_C) == 0x006750, "Wrong size on UF_player_Skeleton_AB_UI_C");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, UberGraphFrame) == 0x001330, "Member 'UF_player_Skeleton_AB_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_LocalToComponentSpace) == 0x001338, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_28) == 0x001358, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_28' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_27) == 0x001460, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_27' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_26) == 0x001568, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_26' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_13) == 0x001670, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_13' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_12) == 0x001990, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_12' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_11) == 0x001CB0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_11' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_10) == 0x001FD0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_10' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_9) == 0x0022F0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_9' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_8) == 0x002610, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_8' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_7) == 0x002930, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_7' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_6) == 0x002C50, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_6' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ComponentToLocalSpace) == 0x002F70, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_SequencePlayer_1) == 0x002F90, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_25) == 0x003010, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_25' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_5) == 0x003120, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_5' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_4) == 0x003440, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_24) == 0x003760, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_24' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_23) == 0x003868, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_23' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_22) == 0x003970, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_22' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_21) == 0x003A78, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_21' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_20) == 0x003B80, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_20' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_19) == 0x003C88, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_19' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_18) == 0x003D90, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_18' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_17) == 0x003E98, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_17' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_16) == 0x003FA0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_16' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_15) == 0x0040A8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_15' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_14) == 0x0041B0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_14' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_13) == 0x0042B8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_13' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_12) == 0x0043C0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_12' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_11) == 0x0044C8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_11' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_10) == 0x0045D0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_10' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_9) == 0x0046D8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_8) == 0x0047E0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_7) == 0x0048E8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_6) == 0x0049F0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_Slot_1) == 0x004AF8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_5) == 0x004B40, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_4) == 0x004C48, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_3) == 0x004D50, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_2) == 0x005070, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_3) == 0x005390, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_SaveCachedPose_2) == 0x005498, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_UseCachedPose_3) == 0x0055F0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_Slot) == 0x005618, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_SaveCachedPose_1) == 0x005660, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_UseCachedPose_2) == 0x0057B8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_LayeredBoneBlend) == 0x0057E0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_UseCachedPose_1) == 0x0058A0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_SaveCachedPose) == 0x0058C8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_UseCachedPose) == 0x005A20, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_2) == 0x005A48, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_HottaBonesModify) == 0x005B50, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_HottaBonesModify' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_Root) == 0x005C50, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics_1) == 0x005C80, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_KawaiiPhysics) == 0x005FA0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone_1) == 0x0062C0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_ModifyBone) == 0x0063C8, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_BlendListByBool) == 0x0064D0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_SequencePlayer) == 0x006570, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, AnimGraphNode_CustomBoneModify) == 0x0065F0, "Member 'UF_player_Skeleton_AB_UI_C::AnimGraphNode_CustomBoneModify' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, PhysicsSettings) == 0x0066D8, "Member 'UF_player_Skeleton_AB_UI_C::PhysicsSettings' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, DummyBoneLength) == 0x0066F0, "Member 'UF_player_Skeleton_AB_UI_C::DummyBoneLength' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, TeleportRotationThreshold) == 0x0066F4, "Member 'UF_player_Skeleton_AB_UI_C::TeleportRotationThreshold' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, Gravity) == 0x0066F8, "Member 'UF_player_Skeleton_AB_UI_C::Gravity' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, PhysicsSettings_Chest) == 0x006704, "Member 'UF_player_Skeleton_AB_UI_C::PhysicsSettings_Chest' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, DummyBoneLength_Chest) == 0x00671C, "Member 'UF_player_Skeleton_AB_UI_C::DummyBoneLength_Chest' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, PhysicsSettings_cope) == 0x006720, "Member 'UF_player_Skeleton_AB_UI_C::PhysicsSettings_cope' has a wrong offset!");
static_assert(offsetof(UF_player_Skeleton_AB_UI_C, Physics_SettingsCope2) == 0x006738, "Member 'UF_player_Skeleton_AB_UI_C::Physics_SettingsCope2' has a wrong offset!");

}

