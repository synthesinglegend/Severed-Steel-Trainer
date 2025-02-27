﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MAC11_s

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MAC11_s.MAC11_s_C
// 0x0020 (0x0700 - 0x06E0)
class AMAC11_s_C final : public AWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Suppressor;                                        // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AmmoInd_C*                          BP_AmmoInd1;                                       // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MAC11_s(int32 EntryPoint);
	void SetupAsSuppressed(bool bSuppressed);
	void Randomize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MAC11_s_C">();
	}
	static class AMAC11_s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMAC11_s_C>();
	}
};
static_assert(alignof(AMAC11_s_C) == 0x000010, "Wrong alignment on AMAC11_s_C");
static_assert(sizeof(AMAC11_s_C) == 0x000700, "Wrong size on AMAC11_s_C");
static_assert(offsetof(AMAC11_s_C, UberGraphFrame) == 0x0006E0, "Member 'AMAC11_s_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMAC11_s_C, Suppressor) == 0x0006E8, "Member 'AMAC11_s_C::Suppressor' has a wrong offset!");
static_assert(offsetof(AMAC11_s_C, BP_AmmoInd1) == 0x0006F0, "Member 'AMAC11_s_C::BP_AmmoInd1' has a wrong offset!");

}

