#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArtifactSkillCoolDownButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArtifactSkillCoolDownButton.ArtifactSkillCoolDownButton_C
// 0x0030 (0x0E48 - 0x0E18)
class UArtifactSkillCoolDownButton_C final : public UQRSLUI_CoolDownButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 DisableImage;                                      // 0x0E20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHottaButton*                           HottaButton;                                       // 0x0E28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0E30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0E38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_61;                                          // 0x0E40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ArtifactSkillCoolDownButton(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArtifactSkillCoolDownButton_C">();
	}
	static class UArtifactSkillCoolDownButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArtifactSkillCoolDownButton_C>();
	}
};
static_assert(alignof(UArtifactSkillCoolDownButton_C) == 0x000008, "Wrong alignment on UArtifactSkillCoolDownButton_C");
static_assert(sizeof(UArtifactSkillCoolDownButton_C) == 0x000E48, "Wrong size on UArtifactSkillCoolDownButton_C");
static_assert(offsetof(UArtifactSkillCoolDownButton_C, UberGraphFrame) == 0x000E18, "Member 'UArtifactSkillCoolDownButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UArtifactSkillCoolDownButton_C, DisableImage) == 0x000E20, "Member 'UArtifactSkillCoolDownButton_C::DisableImage' has a wrong offset!");
static_assert(offsetof(UArtifactSkillCoolDownButton_C, HottaButton) == 0x000E28, "Member 'UArtifactSkillCoolDownButton_C::HottaButton' has a wrong offset!");
static_assert(offsetof(UArtifactSkillCoolDownButton_C, Image) == 0x000E30, "Member 'UArtifactSkillCoolDownButton_C::Image' has a wrong offset!");
static_assert(offsetof(UArtifactSkillCoolDownButton_C, Image_1) == 0x000E38, "Member 'UArtifactSkillCoolDownButton_C::Image_1' has a wrong offset!");
static_assert(offsetof(UArtifactSkillCoolDownButton_C, Image_61) == 0x000E40, "Member 'UArtifactSkillCoolDownButton_C::Image_61' has a wrong offset!");

}

