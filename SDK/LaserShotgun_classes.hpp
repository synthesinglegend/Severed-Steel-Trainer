﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LaserShotgun

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LaserShotgun.LaserShotgun_C
// 0x0010 (0x06F0 - 0x06E0)
class ALaserShotgun_C final : public AWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_AmmoInd_C*                          BP_AmmoInd1;                                       // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LaserShotgun(int32 EntryPoint);
	void Randomize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LaserShotgun_C">();
	}
	static class ALaserShotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALaserShotgun_C>();
	}
};
static_assert(alignof(ALaserShotgun_C) == 0x000010, "Wrong alignment on ALaserShotgun_C");
static_assert(sizeof(ALaserShotgun_C) == 0x0006F0, "Wrong size on ALaserShotgun_C");
static_assert(offsetof(ALaserShotgun_C, UberGraphFrame) == 0x0006E0, "Member 'ALaserShotgun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALaserShotgun_C, BP_AmmoInd1) == 0x0006E8, "Member 'ALaserShotgun_C::BP_AmmoInd1' has a wrong offset!");

}

