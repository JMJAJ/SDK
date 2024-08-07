#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIMonsterHeadUpInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UIMonsterHeadUpInfo.BP_UIMonsterHeadUpInfo_C
// 0x0038 (0x0BD8 - 0x0BA0)
class UBP_UIMonsterHeadUpInfo_C final : public UQRSLUI_MonsterHeadUpInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIParticle*                            ChargeParticleWidget;                              // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExecuteDeathBar_ForElite_C*            ExecuteDeathBar_ForElite;                          // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_94;                                          // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_132;                                         // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RagePanel;                                         // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_UIMonsterHeadUpInfo(int32 EntryPoint);
	void BndEvt__BP_UIMonsterHeadUpInfo_RageProgressBar_K2Node_ComponentBoundEvent_0_OnVisibilityChangedDelegate__DelegateSignature(class UWidget* InWidget, ESlateVisibility InNewVisibility, ESlateVisibility InOldVisibility);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIMonsterHeadUpInfo_C">();
	}
	static class UBP_UIMonsterHeadUpInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIMonsterHeadUpInfo_C>();
	}
};
static_assert(alignof(UBP_UIMonsterHeadUpInfo_C) == 0x000008, "Wrong alignment on UBP_UIMonsterHeadUpInfo_C");
static_assert(sizeof(UBP_UIMonsterHeadUpInfo_C) == 0x000BD8, "Wrong size on UBP_UIMonsterHeadUpInfo_C");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, UberGraphFrame) == 0x000BA0, "Member 'UBP_UIMonsterHeadUpInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, ChargeParticleWidget) == 0x000BA8, "Member 'UBP_UIMonsterHeadUpInfo_C::ChargeParticleWidget' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, ExecuteDeathBar_ForElite) == 0x000BB0, "Member 'UBP_UIMonsterHeadUpInfo_C::ExecuteDeathBar_ForElite' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, Image_1) == 0x000BB8, "Member 'UBP_UIMonsterHeadUpInfo_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, Image_94) == 0x000BC0, "Member 'UBP_UIMonsterHeadUpInfo_C::Image_94' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, Image_132) == 0x000BC8, "Member 'UBP_UIMonsterHeadUpInfo_C::Image_132' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterHeadUpInfo_C, RagePanel) == 0x000BD0, "Member 'UBP_UIMonsterHeadUpInfo_C::RagePanel' has a wrong offset!");

}

