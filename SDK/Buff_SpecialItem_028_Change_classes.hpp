#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buff_SpecialItem_028_Change

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GE_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buff_SpecialItem_028_Change.Buff_SpecialItem_028_Change_C
// 0x0008 (0x1058 - 0x1050)
class UBuff_SpecialItem_028_Change_C final : public UGE_MeleeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Buff_SpecialItem_028_Change(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_SpecialItem_028_Change_C">();
	}
	static class UBuff_SpecialItem_028_Change_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_SpecialItem_028_Change_C>();
	}
};
static_assert(alignof(UBuff_SpecialItem_028_Change_C) == 0x000008, "Wrong alignment on UBuff_SpecialItem_028_Change_C");
static_assert(sizeof(UBuff_SpecialItem_028_Change_C) == 0x001058, "Wrong size on UBuff_SpecialItem_028_Change_C");
static_assert(offsetof(UBuff_SpecialItem_028_Change_C, UberGraphFrame) == 0x001050, "Member 'UBuff_SpecialItem_028_Change_C::UberGraphFrame' has a wrong offset!");

}

