#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_FeedAnimal_NotWalk_Base

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base
// 0x01D0 (0x01D0 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   ___name_Variable;                                  // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CE6[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE7[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ___object_Variable;                                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_DynamicCast_As_____;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE8[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ___object_Variable_1;                              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_DynamicCast_As______1;                      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_IsClosed_Variable;                         // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE9[0x1];                                     // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_EventName;                            // 0x00D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEA[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEB[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0100(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_6CEC[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AQRSLPlayerCharacter*                   K2Node_DynamicCast_AsQRSLPlayer_Character;         // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalClientRole_ReturnValue;            // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CED[0x2];                                     // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_5;            // 0x019C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6CEE[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEF[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_6;            // 0x01BC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base) == 0x000008, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base) == 0x0001D0, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, EntryPoint) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_NotifyName_4) == 0x000014, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, ___name_Variable) == 0x00007C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::___name_Variable' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_Loaded_1) == 0x000088, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000090, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, ___object_Variable) == 0x000098, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::___object_Variable' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_DynamicCast_As_____) == 0x0000A0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_DynamicCast_As_____' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, CallFunc_PlayAnimMontage_ReturnValue) == 0x0000AC, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CustomEvent_Loaded) == 0x0000B0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, ___object_Variable_1) == 0x0000B8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::___object_Variable_1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_DynamicCast_As______1) == 0x0000C0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_DynamicCast_As______1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, ___bool_Has_Been_Initd_Variable) == 0x0000C9, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, ___bool_IsClosed_Variable) == 0x0000CA, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_Event_DeltaSeconds) == 0x0000CC, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_Event_EventName) == 0x0000D0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_Event_EventName' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0000D8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000E0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_ComponentBoundEvent_OtherActor) == 0x0000E8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_ComponentBoundEvent_OtherComp) == 0x0000F0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000F8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000FC, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_ComponentBoundEvent_SweepResult) == 0x000100, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_DynamicCast_AsQRSLPlayer_Character) == 0x000190, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_DynamicCast_AsQRSLPlayer_Character' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_DynamicCast_bSuccess_2) == 0x000198, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, CallFunc_IsLocalClientRole_ReturnValue) == 0x000199, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::CallFunc_IsLocalClientRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate_5) == 0x00019C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0001B0, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, CallFunc_IsValid_ReturnValue) == 0x0001B8, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001BC, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ExecuteUbergraph_NPC_FeedAnimal_NotWalk_Base::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BndEvt__NPC_NeedFood_DialogueCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.BP_OnDialogueEvent
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent, EventName) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_BP_OnDialogueEvent::EventName' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick) == 0x000004, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnLoaded_19B814024E9A0D32C350AE88C8E338AD
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD) == 0x000008, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD, Loaded) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_19B814024E9A0D32C350AE88C8E338AD::Loaded' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24) == 0x000008, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24, Loaded) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnLoaded_4FE9A0ED4DDB76C453344DB5558D9F24::Loaded' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94, NotifyName) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnCompleted_38E9C4E04B88CDC3C99548BC1A48DF94::NotifyName' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94, NotifyName) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnBlendOut_38E9C4E04B88CDC3C99548BC1A48DF94::NotifyName' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94, NotifyName) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnInterrupted_38E9C4E04B88CDC3C99548BC1A48DF94::NotifyName' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94, NotifyName) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnNotifyBegin_38E9C4E04B88CDC3C99548BC1A48DF94::NotifyName' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000004, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94, NotifyName) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_OnNotifyEnd_38E9C4E04B88CDC3C99548BC1A48DF94::NotifyName' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.AnimalUseAimOffset
// 0x0001 (0x0001 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset final
{
public:
	bool                                          Use;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset) == 0x000001, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset) == 0x000001, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset, Use) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_AnimalUseAimOffset::Use' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.ClientAddPOI
// 0x0068 (0x0068 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI final
{
public:
	class AQRSLPlayerCharacter*                   Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPOI                                   K2Node_MakeStruct_POI;                             // 0x0008(0x0060)()
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI) == 0x000008, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI) == 0x000068, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI, Player) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI::Player' has a wrong offset!");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI, K2Node_MakeStruct_POI) == 0x000008, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ClientAddPOI::K2Node_MakeStruct_POI' has a wrong offset!");

// Function NPC_FeedAnimal_NotWalk_Base.NPC_FeedAnimal_NotWalk_Base_C.ClientDelPOI
// 0x0008 (0x0008 - 0x0000)
struct NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI final
{
public:
	class AQRSLPlayerCharacter*                   Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI) == 0x000008, "Wrong alignment on NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI");
static_assert(sizeof(NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI) == 0x000008, "Wrong size on NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI");
static_assert(offsetof(NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI, Player) == 0x000000, "Member 'NPC_FeedAnimal_NotWalk_Base_C_ClientDelPOI::Player' has a wrong offset!");

}

