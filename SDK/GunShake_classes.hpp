﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GunShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GunShake.GunShake_C
// 0x0000 (0x01B0 - 0x01B0)
class UGunShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GunShake_C">();
	}
	static class UGunShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGunShake_C>();
	}
};
static_assert(alignof(UGunShake_C) == 0x000010, "Wrong alignment on UGunShake_C");
static_assert(sizeof(UGunShake_C) == 0x0001B0, "Wrong size on UGunShake_C");

}

