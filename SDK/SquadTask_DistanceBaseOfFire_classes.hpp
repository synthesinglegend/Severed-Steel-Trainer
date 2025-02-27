﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadTask_DistanceBaseOfFire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SquadTask_DistanceBaseOfFire.SquadTask_DistanceBaseOfFire_C
// 0x0010 (0x00B8 - 0x00A8)
class USquadTask_DistanceBaseOfFire_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBehaviorTree*                          LeaderTree;                                        // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SquadTask_DistanceBaseOfFire(int32 EntryPoint);
	void ReceiveExecute(class AActor* OwnerActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadTask_DistanceBaseOfFire_C">();
	}
	static class USquadTask_DistanceBaseOfFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadTask_DistanceBaseOfFire_C>();
	}
};
static_assert(alignof(USquadTask_DistanceBaseOfFire_C) == 0x000008, "Wrong alignment on USquadTask_DistanceBaseOfFire_C");
static_assert(sizeof(USquadTask_DistanceBaseOfFire_C) == 0x0000B8, "Wrong size on USquadTask_DistanceBaseOfFire_C");
static_assert(offsetof(USquadTask_DistanceBaseOfFire_C, UberGraphFrame) == 0x0000A8, "Member 'USquadTask_DistanceBaseOfFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadTask_DistanceBaseOfFire_C, LeaderTree) == 0x0000B0, "Member 'USquadTask_DistanceBaseOfFire_C::LeaderTree' has a wrong offset!");

}

