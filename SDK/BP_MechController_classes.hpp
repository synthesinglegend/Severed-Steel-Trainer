﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MechController

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MechController.BP_MechController_C
// 0x0000 (0x0348 - 0x0348)
class ABP_MechController_C final : public AMechController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MechController_C">();
	}
	static class ABP_MechController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MechController_C>();
	}
};
static_assert(alignof(ABP_MechController_C) == 0x000008, "Wrong alignment on ABP_MechController_C");
static_assert(sizeof(ABP_MechController_C) == 0x000348, "Wrong size on ABP_MechController_C");

}

