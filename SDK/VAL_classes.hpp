﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VAL

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VAL.VAL_C
// 0x0010 (0x06F0 - 0x06E0)
class AVAL_C final : public AWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_AmmoInd_C*                          BP_AmmoInd;                                        // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VAL(int32 EntryPoint);
	void Randomize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VAL_C">();
	}
	static class AVAL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVAL_C>();
	}
};
static_assert(alignof(AVAL_C) == 0x000010, "Wrong alignment on AVAL_C");
static_assert(sizeof(AVAL_C) == 0x0006F0, "Wrong size on AVAL_C");
static_assert(offsetof(AVAL_C, UberGraphFrame) == 0x0006E0, "Member 'AVAL_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVAL_C, BP_AmmoInd) == 0x0006E8, "Member 'AVAL_C::BP_AmmoInd' has a wrong offset!");

}

