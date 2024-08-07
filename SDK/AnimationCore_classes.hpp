#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AnimationCore.AnimationDataSourceRegistry
// 0x0050 (0x0078 - 0x0028)
class UAnimationDataSourceRegistry final : public UObject
{
public:
	TMap<class FName, TWeakObjectPtr<class UObject>> DataSources;                                       // 0x0028(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationDataSourceRegistry">();
	}
	static class UAnimationDataSourceRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationDataSourceRegistry>();
	}
};
static_assert(alignof(UAnimationDataSourceRegistry) == 0x000008, "Wrong alignment on UAnimationDataSourceRegistry");
static_assert(sizeof(UAnimationDataSourceRegistry) == 0x000078, "Wrong size on UAnimationDataSourceRegistry");
static_assert(offsetof(UAnimationDataSourceRegistry, DataSources) == 0x000028, "Member 'UAnimationDataSourceRegistry::DataSources' has a wrong offset!");

}

