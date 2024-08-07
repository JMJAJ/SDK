#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MMC_buff_level_balance_mon_70

#include "Basic.hpp"


namespace SDK::Params
{

// Function MMC_buff_level_balance_mon_70.MMC_buff_level_balance_mon_70_C.HottaCalculateBaseMagnitude
// 0x0028 (0x0028 - 0x0000)
struct MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude final
{
public:
	const class AActor*                           OwnerActor;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           HitActor;                                          // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InstigatorActor;                                   // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55AC[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHottaCharacter*                        PlayerCharacter;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude) == 0x000008, "Wrong alignment on MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude");
static_assert(sizeof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude) == 0x000028, "Wrong size on MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude");
static_assert(offsetof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude, OwnerActor) == 0x000000, "Member 'MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude::OwnerActor' has a wrong offset!");
static_assert(offsetof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude, HitActor) == 0x000008, "Member 'MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude::HitActor' has a wrong offset!");
static_assert(offsetof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude, InstigatorActor) == 0x000010, "Member 'MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude::InstigatorActor' has a wrong offset!");
static_assert(offsetof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude, ReturnValue) == 0x000018, "Member 'MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude, PlayerCharacter) == 0x000020, "Member 'MMC_buff_level_balance_mon_70_C_HottaCalculateBaseMagnitude::PlayerCharacter' has a wrong offset!");

}

