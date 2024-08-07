#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_QuestTrackItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_QuestTrackItem.UI_QuestTrackItem_C
// 0x0030 (0x0B58 - 0x0B28)
class UUI_QuestTrackItem_C final : public UQRSLUI_QuestTrackItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0B30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_212;                                         // 0x0B38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_type_bg;                                     // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_QuestObjectiveTrack_C*              UI_QuestObjectiveTrack;                            // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIParticle*                            UIParticle_135;                                    // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_QuestTrackItem(int32 EntryPoint);
	void OnQuestUnSatisfy(class FName QuestID);
	void BndEvt__BtnNeedExp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnTrackInfoShow(class FName QuestID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_QuestTrackItem_C">();
	}
	static class UUI_QuestTrackItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_QuestTrackItem_C>();
	}
};
static_assert(alignof(UUI_QuestTrackItem_C) == 0x000008, "Wrong alignment on UUI_QuestTrackItem_C");
static_assert(sizeof(UUI_QuestTrackItem_C) == 0x000B58, "Wrong size on UUI_QuestTrackItem_C");
static_assert(offsetof(UUI_QuestTrackItem_C, UberGraphFrame) == 0x000B28, "Member 'UUI_QuestTrackItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_QuestTrackItem_C, CanvasPanel_0) == 0x000B30, "Member 'UUI_QuestTrackItem_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UUI_QuestTrackItem_C, Image_212) == 0x000B38, "Member 'UUI_QuestTrackItem_C::Image_212' has a wrong offset!");
static_assert(offsetof(UUI_QuestTrackItem_C, Image_type_bg) == 0x000B40, "Member 'UUI_QuestTrackItem_C::Image_type_bg' has a wrong offset!");
static_assert(offsetof(UUI_QuestTrackItem_C, UI_QuestObjectiveTrack) == 0x000B48, "Member 'UUI_QuestTrackItem_C::UI_QuestObjectiveTrack' has a wrong offset!");
static_assert(offsetof(UUI_QuestTrackItem_C, UIParticle_135) == 0x000B50, "Member 'UUI_QuestTrackItem_C::UIParticle_135' has a wrong offset!");

}

