#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mon_hum_002_bomb

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function mon_hum_002_bomb.mon_hum_002_bomb_C.ExecuteUbergraph_mon_hum_002_bomb
// 0x00E8 (0x00E8 - 0x0000)
struct Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHP_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DamageAmount;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x000C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;                           // 0x0098(0x0020)(ConstParm)
	TSubclassOf<class UGameplayEffect>            K2Node_Event_DamageGameplayEffect;                 // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AHottaCharacter*                        K2Node_Event_InstigatorCharacter;                  // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC7[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxHP_ReturnValue;                     // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb) == 0x000008, "Wrong alignment on Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb");
static_assert(sizeof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb) == 0x0000E8, "Wrong size on Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, EntryPoint) == 0x000000, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, CallFunc_GetHP_ReturnValue) == 0x000004, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, K2Node_Event_DamageAmount) == 0x000008, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::K2Node_Event_DamageAmount' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, K2Node_Event_HitInfo) == 0x00000C, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, K2Node_Event_DamageTags) == 0x000098, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, K2Node_Event_DamageGameplayEffect) == 0x0000B8, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::K2Node_Event_DamageGameplayEffect' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, K2Node_Event_InstigatorCharacter) == 0x0000C0, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::K2Node_Event_InstigatorCharacter' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, K2Node_Event_DamageCauser) == 0x0000C8, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x0000D0, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000D8, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, CallFunc_GetMaxHP_ReturnValue) == 0x0000DC, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000E0, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000E4, "Member 'Mon_hum_002_bomb_C_ExecuteUbergraph_mon_hum_002_bomb::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function mon_hum_002_bomb.mon_hum_002_bomb_C.OnDamaged
// 0x00C8 (0x00C8 - 0x0000)
struct Mon_hum_002_bomb_C_OnDamaged final
{
public:
	float                                         DamageAmount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0004(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0090(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSubclassOf<class UGameplayEffect>            DamageGameplayEffect;                              // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AHottaCharacter*                        InstigatorCharacter;                               // 0x00B8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mon_hum_002_bomb_C_OnDamaged) == 0x000008, "Wrong alignment on Mon_hum_002_bomb_C_OnDamaged");
static_assert(sizeof(Mon_hum_002_bomb_C_OnDamaged) == 0x0000C8, "Wrong size on Mon_hum_002_bomb_C_OnDamaged");
static_assert(offsetof(Mon_hum_002_bomb_C_OnDamaged, DamageAmount) == 0x000000, "Member 'Mon_hum_002_bomb_C_OnDamaged::DamageAmount' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_OnDamaged, HitInfo) == 0x000004, "Member 'Mon_hum_002_bomb_C_OnDamaged::HitInfo' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_OnDamaged, DamageTags) == 0x000090, "Member 'Mon_hum_002_bomb_C_OnDamaged::DamageTags' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_OnDamaged, DamageGameplayEffect) == 0x0000B0, "Member 'Mon_hum_002_bomb_C_OnDamaged::DamageGameplayEffect' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_OnDamaged, InstigatorCharacter) == 0x0000B8, "Member 'Mon_hum_002_bomb_C_OnDamaged::InstigatorCharacter' has a wrong offset!");
static_assert(offsetof(Mon_hum_002_bomb_C_OnDamaged, DamageCauser) == 0x0000C0, "Member 'Mon_hum_002_bomb_C_OnDamaged::DamageCauser' has a wrong offset!");

}

