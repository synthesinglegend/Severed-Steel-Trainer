﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pillow

#include "Basic.hpp"

#include "BP_PropVoxelWorld_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pillow.BP_Pillow_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABP_Pillow_C final : public ABP_PropVoxelWorld_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pillow_C">();
	}
	static class ABP_Pillow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pillow_C>();
	}
};
static_assert(alignof(ABP_Pillow_C) == 0x000008, "Wrong alignment on ABP_Pillow_C");
static_assert(sizeof(ABP_Pillow_C) == 0x000AB0, "Wrong size on ABP_Pillow_C");

}

