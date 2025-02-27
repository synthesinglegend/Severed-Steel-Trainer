﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_GoalWeaponInvalid

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_GoalWeaponInvalid.BTD_GoalWeaponInvalid_C
// 0x0028 (0x00C8 - 0x00A0)
class UBTD_GoalWeaponInvalid_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 GoalWeaponKey;                                     // 0x00A0(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_GoalWeaponInvalid_C">();
	}
	static class UBTD_GoalWeaponInvalid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_GoalWeaponInvalid_C>();
	}
};
static_assert(alignof(UBTD_GoalWeaponInvalid_C) == 0x000008, "Wrong alignment on UBTD_GoalWeaponInvalid_C");
static_assert(sizeof(UBTD_GoalWeaponInvalid_C) == 0x0000C8, "Wrong size on UBTD_GoalWeaponInvalid_C");
static_assert(offsetof(UBTD_GoalWeaponInvalid_C, GoalWeaponKey) == 0x0000A0, "Member 'UBTD_GoalWeaponInvalid_C::GoalWeaponKey' has a wrong offset!");

}

