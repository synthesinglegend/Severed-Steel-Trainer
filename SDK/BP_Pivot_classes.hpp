﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pivot

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pivot.BP_Pivot_C
// 0x0008 (0x0228 - 0x0220)
class ABP_Pivot_C final : public AActor
{
public:
	class USceneComponent*                        Scene;                                             // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pivot_C">();
	}
	static class ABP_Pivot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pivot_C>();
	}
};
static_assert(alignof(ABP_Pivot_C) == 0x000008, "Wrong alignment on ABP_Pivot_C");
static_assert(sizeof(ABP_Pivot_C) == 0x000228, "Wrong size on ABP_Pivot_C");
static_assert(offsetof(ABP_Pivot_C, Scene) == 0x000220, "Member 'ABP_Pivot_C::Scene' has a wrong offset!");

}

