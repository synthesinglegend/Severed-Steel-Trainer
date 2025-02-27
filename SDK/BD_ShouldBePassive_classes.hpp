﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BD_ShouldBePassive

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BD_ShouldBePassive.BD_ShouldBePassive_C
// 0x0000 (0x00A0 - 0x00A0)
class UBD_ShouldBePassive_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BD_ShouldBePassive_C">();
	}
	static class UBD_ShouldBePassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBD_ShouldBePassive_C>();
	}
};
static_assert(alignof(UBD_ShouldBePassive_C) == 0x000008, "Wrong alignment on UBD_ShouldBePassive_C");
static_assert(sizeof(UBD_ShouldBePassive_C) == 0x0000A0, "Wrong size on UBD_ShouldBePassive_C");

}

