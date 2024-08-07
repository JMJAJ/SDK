#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIMonsterBufferManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UIMonsterBufferManager.BP_UIMonsterBufferManager_C
// 0x0010 (0x08B0 - 0x08A0)
class UBP_UIMonsterBufferManager_C final : public UQRSLUI_MonsterBufferManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           PlaceholderPanel;                                  // 0x08A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_UIMonsterBufferManager(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIMonsterBufferManager_C">();
	}
	static class UBP_UIMonsterBufferManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIMonsterBufferManager_C>();
	}
};
static_assert(alignof(UBP_UIMonsterBufferManager_C) == 0x000008, "Wrong alignment on UBP_UIMonsterBufferManager_C");
static_assert(sizeof(UBP_UIMonsterBufferManager_C) == 0x0008B0, "Wrong size on UBP_UIMonsterBufferManager_C");
static_assert(offsetof(UBP_UIMonsterBufferManager_C, UberGraphFrame) == 0x0008A0, "Member 'UBP_UIMonsterBufferManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UIMonsterBufferManager_C, PlaceholderPanel) == 0x0008A8, "Member 'UBP_UIMonsterBufferManager_C::PlaceholderPanel' has a wrong offset!");

}

