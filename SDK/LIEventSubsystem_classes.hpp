#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LIEventSubsystem

#include "Basic.hpp"

#include "LIEventSubsystem_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class LIEventSubsystem.LIEventManager
// 0x0050 (0x0078 - 0x0028)
class ULIEventManager final : public UObject
{
public:
	TMap<class UScriptStruct*, struct FEventSection> MappedEvents;                                      // 0x0028(0x0050)(NativeAccessSpecifierPrivate)

public:
	static bool CallEventSafely(struct FEventBase& EventToCall, class UScriptStruct* EventClass);
	static class ULIEventManager* GetInstance();

	void CallEvent(struct FEventBase& EventToCall, class UScriptStruct* EventClass);
	EEventRegistrationResult RegisterEvents(class UObject* Object, EListenerPriority Priority);
	EEventRegistrationResult RegisterSingleEvent(class UObject* Object, class UScriptStruct* EventClass, EListenerPriority Priority);
	void UnregisterEvents(class UObject* Object);
	void UnregisterSingleEvent(class UObject* Object, class UScriptStruct* EventClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LIEventManager">();
	}
	static class ULIEventManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULIEventManager>();
	}
};
static_assert(alignof(ULIEventManager) == 0x000008, "Wrong alignment on ULIEventManager");
static_assert(sizeof(ULIEventManager) == 0x000078, "Wrong size on ULIEventManager");
static_assert(offsetof(ULIEventManager, MappedEvents) == 0x000028, "Member 'ULIEventManager::MappedEvents' has a wrong offset!");

}

