﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bullseye

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_PropVoxelWorld_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bullseye.BP_Bullseye_C
// 0x0010 (0x0AC0 - 0x0AB0)
class ABP_Bullseye_C final : public ABP_PropVoxelWorld_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Bullseye_C;                      // 0x0AB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bBeenHit;                                          // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Bullseye(int32 EntryPoint);
	void ImpulseIfPossible(const struct FVector& Impulse);
	bool OnHit(EImpactType ImpactType, const struct FHitResult& HitResult, float Dmg);
	void ResetHit();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bullseye_C">();
	}
	static class ABP_Bullseye_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bullseye_C>();
	}
};
static_assert(alignof(ABP_Bullseye_C) == 0x000008, "Wrong alignment on ABP_Bullseye_C");
static_assert(sizeof(ABP_Bullseye_C) == 0x000AC0, "Wrong size on ABP_Bullseye_C");
static_assert(offsetof(ABP_Bullseye_C, UberGraphFrame_BP_Bullseye_C) == 0x000AB0, "Member 'ABP_Bullseye_C::UberGraphFrame_BP_Bullseye_C' has a wrong offset!");
static_assert(offsetof(ABP_Bullseye_C, bBeenHit) == 0x000AB8, "Member 'ABP_Bullseye_C::bBeenHit' has a wrong offset!");

}

