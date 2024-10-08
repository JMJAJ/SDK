#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExecuteDeathBar_ForElite

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ExecuteDeathBar_ForElite.ExecuteDeathBar_ForElite_C
// 0x0010 (0x0600 - 0x05F0)
class UExecuteDeathBar_ForElite_C final : public UQRSLUI_ExecuteDeathBar
{
public:
	class UImage*                                 PB_LX_Bottom2;                                     // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PB_LX_Ora2;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ExecuteDeathBar_ForElite_C">();
	}
	static class UExecuteDeathBar_ForElite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExecuteDeathBar_ForElite_C>();
	}
};
static_assert(alignof(UExecuteDeathBar_ForElite_C) == 0x000008, "Wrong alignment on UExecuteDeathBar_ForElite_C");
static_assert(sizeof(UExecuteDeathBar_ForElite_C) == 0x000600, "Wrong size on UExecuteDeathBar_ForElite_C");
static_assert(offsetof(UExecuteDeathBar_ForElite_C, PB_LX_Bottom2) == 0x0005F0, "Member 'UExecuteDeathBar_ForElite_C::PB_LX_Bottom2' has a wrong offset!");
static_assert(offsetof(UExecuteDeathBar_ForElite_C, PB_LX_Ora2) == 0x0005F8, "Member 'UExecuteDeathBar_ForElite_C::PB_LX_Ora2' has a wrong offset!");

}

