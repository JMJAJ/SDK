#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckEquipWeaponNS

#include "Basic.hpp"

#include "HottaFramework_structs.hpp"


namespace SDK::Params
{

// Function CheckEquipWeaponNS.CheckEquipWeaponNS_C.Received_NotifyEnd
// 0x0040 (0x0040 - 0x0000)
struct CheckEquipWeaponNS_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C78[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalClientRole_ReturnValue;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C79[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeaponBase*                            CallFunc_GetCurrentWeapon_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckEquipWeaponNS_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on CheckEquipWeaponNS_C_Received_NotifyEnd");
static_assert(sizeof(CheckEquipWeaponNS_C_Received_NotifyEnd) == 0x000040, "Wrong size on CheckEquipWeaponNS_C_Received_NotifyEnd");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000020, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, CallFunc_BooleanOR_ReturnValue) == 0x000029, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, CallFunc_IsLocalClientRole_ReturnValue) == 0x00002A, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::CallFunc_IsLocalClientRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, CallFunc_GetCurrentWeapon_ReturnValue) == 0x000030, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::CallFunc_GetCurrentWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyEnd, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'CheckEquipWeaponNS_C_Received_NotifyEnd::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CheckEquipWeaponNS.CheckEquipWeaponNS_C.Received_NotifyBegin
// 0x0048 (0x0048 - 0x0000)
struct CheckEquipWeaponNS_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7A[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalClientRole_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHoldInHandStateType                          CallFunc_GetCurrentWeaponHoldState_ReturnValue;    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeaponBase*                            CallFunc_GetCurrentWeapon_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckEquipWeaponNS_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on CheckEquipWeaponNS_C_Received_NotifyBegin");
static_assert(sizeof(CheckEquipWeaponNS_C_Received_NotifyBegin) == 0x000048, "Wrong size on CheckEquipWeaponNS_C_Received_NotifyBegin");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_IsLocalClientRole_ReturnValue) == 0x000020, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_IsLocalClientRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000028, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_GetCurrentWeaponHoldState_ReturnValue) == 0x000031, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_GetCurrentWeaponHoldState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000033, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_GetCurrentWeapon_ReturnValue) == 0x000038, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_GetCurrentWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_BooleanOR_ReturnValue) == 0x000040, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckEquipWeaponNS_C_Received_NotifyBegin, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'CheckEquipWeaponNS_C_Received_NotifyBegin::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

