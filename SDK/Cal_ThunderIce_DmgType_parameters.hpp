#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cal_ThunderIce_DmgType

#include "Basic.hpp"


namespace SDK::Params
{

// Function Cal_ThunderIce_DmgType.Cal_ThunderIce_DmgType_C.HottaCalculateBaseMagnitude
// 0x0048 (0x0048 - 0x0000)
struct Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude final
{
public:
	const class AActor*                           OwnerActor;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InstigatorActor;                                   // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_536B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaPlayerCharacter*                  K2Node_DynamicCast_AsHotta_Player_Character;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536C[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeaponBase*                            CallFunc_GetCurrentWeapon_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ItemID_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckItemWeaponElementType_ReturnValue;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude) == 0x000008, "Wrong alignment on Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude");
static_assert(sizeof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude) == 0x000048, "Wrong size on Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, OwnerActor) == 0x000000, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::OwnerActor' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, HitActor) == 0x000008, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::HitActor' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, InstigatorActor) == 0x000010, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::InstigatorActor' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, ReturnValue) == 0x000018, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_AsHotta_Player_Character) == 0x000020, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_AsHotta_Player_Character' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, CallFunc_GetCurrentWeapon_ReturnValue) == 0x000030, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::CallFunc_GetCurrentWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, CallFunc_ItemID_ReturnValue) == 0x000038, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::CallFunc_ItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude, CallFunc_CheckItemWeaponElementType_ReturnValue) == 0x000040, "Member 'Cal_ThunderIce_DmgType_C_HottaCalculateBaseMagnitude::CallFunc_CheckItemWeaponElementType_ReturnValue' has a wrong offset!");

}

