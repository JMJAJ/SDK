#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UISupplyItemSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UISupplyItemSlot.BP_UISupplyItemSlot_C
// 0x0018 (0x0908 - 0x08F0)
class UBP_UISupplyItemSlot_C final : public UQRSLUI_ItemSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                             BackImage;                                         // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             SelectedImage;                                     // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_UISupplyItemSlot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UISupplyItemSlot_C">();
	}
	static class UBP_UISupplyItemSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UISupplyItemSlot_C>();
	}
};
static_assert(alignof(UBP_UISupplyItemSlot_C) == 0x000008, "Wrong alignment on UBP_UISupplyItemSlot_C");
static_assert(sizeof(UBP_UISupplyItemSlot_C) == 0x000908, "Wrong size on UBP_UISupplyItemSlot_C");
static_assert(offsetof(UBP_UISupplyItemSlot_C, UberGraphFrame) == 0x0008F0, "Member 'UBP_UISupplyItemSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UISupplyItemSlot_C, BackImage) == 0x0008F8, "Member 'UBP_UISupplyItemSlot_C::BackImage' has a wrong offset!");
static_assert(offsetof(UBP_UISupplyItemSlot_C, SelectedImage) == 0x000900, "Member 'UBP_UISupplyItemSlot_C::SelectedImage' has a wrong offset!");

}

