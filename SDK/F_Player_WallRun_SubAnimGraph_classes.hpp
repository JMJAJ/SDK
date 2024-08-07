#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Player_WallRun_SubAnimGraph

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_Player_WallRun_SubAnimGraph.F_Player_WallRun_SubAnimGraph_C
// 0x1230 (0x1570 - 0x0340)
class UF_Player_WallRun_SubAnimGraph_C final : public UQRSLWallRunningAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0348(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_26;                 // 0x0378(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x03A0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x03C8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x0448(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x0478(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x04A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x04C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x04F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x0518(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x0540(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x0568(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x0590(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x05B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x05E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0608(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0630(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0658(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0680(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x06A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x06D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x06F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0720(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0748(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0770(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0798(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x07C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x07E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0810(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0838(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_6;                  // 0x0860(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x0948(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0978(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x09F8(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x0A28(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_5;                  // 0x0A58(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0B40(0x0030)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0B70(0x00A0)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_4;                  // 0x0C10(0x00E8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x0CF8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0DE0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0E10(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0E90(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0EC0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0FA8(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0FD8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x10C0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x10F0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x11D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1208(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1288(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1328(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x13A8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x13D8(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1488(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x14B8(0x00B0)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_81F3BB634A4A3B278EB40BA2FABA238C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_BlendSpacePlayer_349D341C42D156E98F57C680F5B3AF79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_35FA9B984A9A40DEBF73D5BD241AB4B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_5014DB5845BF9C2964488F8C08FC2E1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_820997404EF418EB683BBA9B5F9364DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_E2C12F0246195D7ADE80EC8B67CFE617();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_34DA6927403A0287E451D2868A6CC275();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_1DEB984B40DE3E9F1145228BE1B57840();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_EDAC372048D8C2E6AF0529B38B01482D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_AF98FD4E4BE509DA7FBE7ABF25592EA3();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_FF1A87024E48A61BE1081184C0C5A9B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Player_WallRun_SubAnimGraph_AnimGraphNode_TransitionResult_727BB9674E67E55C9BB5FD915A72C23A();
	void ExecuteUbergraph_F_Player_WallRun_SubAnimGraph(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_Player_WallRun_SubAnimGraph_C">();
	}
	static class UF_Player_WallRun_SubAnimGraph_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_Player_WallRun_SubAnimGraph_C>();
	}
};
static_assert(alignof(UF_Player_WallRun_SubAnimGraph_C) == 0x000010, "Wrong alignment on UF_Player_WallRun_SubAnimGraph_C");
static_assert(sizeof(UF_Player_WallRun_SubAnimGraph_C) == 0x001570, "Wrong size on UF_Player_WallRun_SubAnimGraph_C");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, UberGraphFrame) == 0x000340, "Member 'UF_Player_WallRun_SubAnimGraph_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_Root) == 0x000348, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_26) == 0x000378, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_26' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_25) == 0x0003A0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_SequencePlayer_4) == 0x0003C8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_11) == 0x000448, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_24) == 0x000478, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_23) == 0x0004A0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_22) == 0x0004C8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_21) == 0x0004F0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_20) == 0x000518, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_19) == 0x000540, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_18) == 0x000568, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_17) == 0x000590, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_16) == 0x0005B8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_15) == 0x0005E0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_14) == 0x000608, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_13) == 0x000630, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_12) == 0x000658, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_11) == 0x000680, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_10) == 0x0006A8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_9) == 0x0006D0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_8) == 0x0006F8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_7) == 0x000720, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_6) == 0x000748, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_5) == 0x000770, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_4) == 0x000798, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_3) == 0x0007C0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_2) == 0x0007E8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult_1) == 0x000810, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_TransitionResult) == 0x000838, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer_6) == 0x000860, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer_6' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_10) == 0x000948, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_SequencePlayer_3) == 0x000978, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_9) == 0x0009F8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_8) == 0x000A28, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer_5) == 0x000A58, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer_5' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_7) == 0x000B40, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendListByBool_1) == 0x000B70, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer_4) == 0x000C10, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer_4' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer_3) == 0x000CF8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_6) == 0x000DE0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_SequencePlayer_2) == 0x000E10, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_5) == 0x000E90, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000EC0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_4) == 0x000FA8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000FD8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_3) == 0x0010C0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendSpacePlayer) == 0x0010F0, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_2) == 0x0011D8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_SequencePlayer_1) == 0x001208, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_BlendListByBool) == 0x001288, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_SequencePlayer) == 0x001328, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult_1) == 0x0013A8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateMachine_1) == 0x0013D8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateResult) == 0x001488, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UF_Player_WallRun_SubAnimGraph_C, AnimGraphNode_StateMachine) == 0x0014B8, "Member 'UF_Player_WallRun_SubAnimGraph_C::AnimGraphNode_StateMachine' has a wrong offset!");

}

