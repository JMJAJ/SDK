#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsNotBalanceServer

#include "Basic.hpp"


namespace SDK::Params
{

// Function IsNotBalanceServer.IsNotBalanceServer_C.CanApplyGameplayEffectContent
// 0x0028 (0x0028 - 0x0000)
struct IsNotBalanceServer_C_CanApplyGameplayEffectContent final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InstigatorActor;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UGameplayEffect*                  GameplayEffect;                                    // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBalanceServerMode_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IsNotBalanceServer_C_CanApplyGameplayEffectContent) == 0x000008, "Wrong alignment on IsNotBalanceServer_C_CanApplyGameplayEffectContent");
static_assert(sizeof(IsNotBalanceServer_C_CanApplyGameplayEffectContent) == 0x000028, "Wrong size on IsNotBalanceServer_C_CanApplyGameplayEffectContent");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, SourceActor) == 0x000000, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::SourceActor' has a wrong offset!");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, TargetActor) == 0x000008, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::TargetActor' has a wrong offset!");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, InstigatorActor) == 0x000010, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::InstigatorActor' has a wrong offset!");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, GameplayEffect) == 0x000018, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::GameplayEffect' has a wrong offset!");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, ReturnValue) == 0x000020, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::ReturnValue' has a wrong offset!");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, CallFunc_IsBalanceServerMode_ReturnValue) == 0x000021, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::CallFunc_IsBalanceServerMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(IsNotBalanceServer_C_CanApplyGameplayEffectContent, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'IsNotBalanceServer_C_CanApplyGameplayEffectContent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

