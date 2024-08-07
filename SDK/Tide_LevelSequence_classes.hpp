#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tide_LevelSequence

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"
#include "Engine_structs.hpp"
#include "HottaFramework_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tide_LevelSequence.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void HottaTideVolume_Event_1(class AHottaTideVolume* HottaTideVolume, ETideState NewState);
	void HottaTideVolume_Event_0(class AHottaTideVolume* HottaTideVolume, ETideState NewState);
	void HottaTideVolume6_Event_1(class AHottaTideVolume* HottaTideVolume6, ETideState NewState);
	void HottaTideVolume5_Event_1(class AHottaTideVolume* HottaTideVolume5, ETideState NewState);
	void HottaTideVolume4_Event_1(class AHottaTideVolume* HottaTideVolume4, ETideState NewState);
	void HottaTideVolume3_Event_1(class AHottaTideVolume* HottaTideVolume3, ETideState NewState);
	void HottaTideVolume2_Event_1(class AHottaTideVolume* HottaTideVolume2, ETideState NewState);
	void HottaTideVolume6_Event_0(class AHottaTideVolume* HottaTideVolume6, ETideState NewState);
	void HottaTideVolume5_Event_0(class AHottaTideVolume* HottaTideVolume5, ETideState NewState);
	void HottaTideVolume4_Event_0(class AHottaTideVolume* HottaTideVolume4, ETideState NewState);
	void HottaTideVolume3_Event_0(class AHottaTideVolume* HottaTideVolume3, ETideState NewState);
	void HottaTideVolume2_Event_0(class AHottaTideVolume* HottaTideVolume2, ETideState NewState);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class AHottaTideVolume* HottaTideVolume2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class AHottaTideVolume* HottaTideVolume2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class AHottaTideVolume* HottaTideVolume2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class AHottaTideVolume* HottaTideVolume2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class AHottaTideVolume* HottaTideVolume3);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class AHottaTideVolume* HottaTideVolume3);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class AHottaTideVolume* HottaTideVolume3);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class AHottaTideVolume* HottaTideVolume3);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class AHottaTideVolume* HottaTideVolume4);
	void SequenceEvent__ENTRYPOINTSequenceDirector_9(class AHottaTideVolume* HottaTideVolume4);
	void SequenceEvent__ENTRYPOINTSequenceDirector_10(class AHottaTideVolume* HottaTideVolume4);
	void SequenceEvent__ENTRYPOINTSequenceDirector_11(class AHottaTideVolume* HottaTideVolume4);
	void SequenceEvent__ENTRYPOINTSequenceDirector_12(class AHottaTideVolume* HottaTideVolume5);
	void SequenceEvent__ENTRYPOINTSequenceDirector_13(class AHottaTideVolume* HottaTideVolume5);
	void SequenceEvent__ENTRYPOINTSequenceDirector_14(class AHottaTideVolume* HottaTideVolume5);
	void SequenceEvent__ENTRYPOINTSequenceDirector_15(class AHottaTideVolume* HottaTideVolume5);
	void SequenceEvent__ENTRYPOINTSequenceDirector_16(class AHottaTideVolume* HottaTideVolume6);
	void SequenceEvent__ENTRYPOINTSequenceDirector_17(class AHottaTideVolume* HottaTideVolume6);
	void SequenceEvent__ENTRYPOINTSequenceDirector_18(class AHottaTideVolume* HottaTideVolume6);
	void SequenceEvent__ENTRYPOINTSequenceDirector_19(class AHottaTideVolume* HottaTideVolume6);
	void SequenceEvent__ENTRYPOINTSequenceDirector_20(class AHottaTideVolume* HottaTideVolume);
	void SequenceEvent__ENTRYPOINTSequenceDirector_21(class AHottaTideVolume* HottaTideVolume);
	void SequenceEvent__ENTRYPOINTSequenceDirector_22(class AHottaTideVolume* HottaTideVolume);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SequenceDirector_C">();
	}
	static class USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceDirector_C>();
	}
};
static_assert(alignof(USequenceDirector_C) == 0x000008, "Wrong alignment on USequenceDirector_C");
static_assert(sizeof(USequenceDirector_C) == 0x000038, "Wrong size on USequenceDirector_C");
static_assert(offsetof(USequenceDirector_C, UberGraphFrame) == 0x000030, "Member 'USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}

