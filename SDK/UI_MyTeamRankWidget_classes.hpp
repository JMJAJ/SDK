#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MyTeamRankWidget

#include "Basic.hpp"

#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MyTeamRankWidget.UI_MyTeamRankWidget_C
// 0x0000 (0x08A0 - 0x08A0)
class UUI_MyTeamRankWidget_C final : public UQRSLUI_WorldBossRankWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MyTeamRankWidget_C">();
	}
	static class UUI_MyTeamRankWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MyTeamRankWidget_C>();
	}
};
static_assert(alignof(UUI_MyTeamRankWidget_C) == 0x000008, "Wrong alignment on UUI_MyTeamRankWidget_C");
static_assert(sizeof(UUI_MyTeamRankWidget_C) == 0x0008A0, "Wrong size on UUI_MyTeamRankWidget_C");

}

