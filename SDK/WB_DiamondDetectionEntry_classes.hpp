#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DiamondDetectionEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_DiamondDetectionEntry.WB_DiamondDetectionEntry_C
// 0x0048 (0x0E30 - 0x0DE8)
class UWB_DiamondDetectionEntry_C final : public UQRSLUI_DiamondDetectionEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0DE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               SizeBoxCount;                                      // 0x0DF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FWidgetTransform                       CountText_0_Transform;                             // 0x0DF8(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FWidgetTransform                       CountText_1_Transform;                             // 0x0E14(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ShouldHideCount(bool* Ret);
	void OpenDiamondDetection();
	bool BPHandledDetectionButtonClicked();
	bool ReceiveShouldHideSelf(class AHottaPlayerCharacter* PlayerCharacter);
	void SetCountText(int32 InCurrentCount, int32 InTotalCount);
	void ReceiveRefreshCount(int32 InCurrentCount, int32 InTotalCount);
	void Construct();
	void ExecuteUbergraph_WB_DiamondDetectionEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_DiamondDetectionEntry_C">();
	}
	static class UWB_DiamondDetectionEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_DiamondDetectionEntry_C>();
	}
};
static_assert(alignof(UWB_DiamondDetectionEntry_C) == 0x000008, "Wrong alignment on UWB_DiamondDetectionEntry_C");
static_assert(sizeof(UWB_DiamondDetectionEntry_C) == 0x000E30, "Wrong size on UWB_DiamondDetectionEntry_C");
static_assert(offsetof(UWB_DiamondDetectionEntry_C, UberGraphFrame) == 0x000DE8, "Member 'UWB_DiamondDetectionEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_DiamondDetectionEntry_C, SizeBoxCount) == 0x000DF0, "Member 'UWB_DiamondDetectionEntry_C::SizeBoxCount' has a wrong offset!");
static_assert(offsetof(UWB_DiamondDetectionEntry_C, CountText_0_Transform) == 0x000DF8, "Member 'UWB_DiamondDetectionEntry_C::CountText_0_Transform' has a wrong offset!");
static_assert(offsetof(UWB_DiamondDetectionEntry_C, CountText_1_Transform) == 0x000E14, "Member 'UWB_DiamondDetectionEntry_C::CountText_1_Transform' has a wrong offset!");

}

