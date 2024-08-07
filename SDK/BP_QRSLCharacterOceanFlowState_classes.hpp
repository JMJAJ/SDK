#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QRSLCharacterOceanFlowState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QRSL_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QRSLCharacterOceanFlowState.BP_QRSLCharacterOceanFlowState_C
// 0x0028 (0x00C0 - 0x0098)
class UBP_QRSLCharacterOceanFlowState_C final : public UQRSLCharacterOceanState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                          EnterStateEvent;                                   // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          OutStateEvent;                                     // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          EnterStateEvent_2;                                 // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          OutStateEvent_2;                                   // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_QRSLCharacterOceanFlowState(int32 EntryPoint);
	void BPCall_ClientPlayerOutState(class AHottaPlayerCharacter* Player);
	void BPCall_ClientPlayerEnterState(class AHottaPlayerCharacter* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QRSLCharacterOceanFlowState_C">();
	}
	static class UBP_QRSLCharacterOceanFlowState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QRSLCharacterOceanFlowState_C>();
	}
};
static_assert(alignof(UBP_QRSLCharacterOceanFlowState_C) == 0x000008, "Wrong alignment on UBP_QRSLCharacterOceanFlowState_C");
static_assert(sizeof(UBP_QRSLCharacterOceanFlowState_C) == 0x0000C0, "Wrong size on UBP_QRSLCharacterOceanFlowState_C");
static_assert(offsetof(UBP_QRSLCharacterOceanFlowState_C, UberGraphFrame) == 0x000098, "Member 'UBP_QRSLCharacterOceanFlowState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_QRSLCharacterOceanFlowState_C, EnterStateEvent) == 0x0000A0, "Member 'UBP_QRSLCharacterOceanFlowState_C::EnterStateEvent' has a wrong offset!");
static_assert(offsetof(UBP_QRSLCharacterOceanFlowState_C, OutStateEvent) == 0x0000A8, "Member 'UBP_QRSLCharacterOceanFlowState_C::OutStateEvent' has a wrong offset!");
static_assert(offsetof(UBP_QRSLCharacterOceanFlowState_C, EnterStateEvent_2) == 0x0000B0, "Member 'UBP_QRSLCharacterOceanFlowState_C::EnterStateEvent_2' has a wrong offset!");
static_assert(offsetof(UBP_QRSLCharacterOceanFlowState_C, OutStateEvent_2) == 0x0000B8, "Member 'UBP_QRSLCharacterOceanFlowState_C::OutStateEvent_2' has a wrong offset!");

}

