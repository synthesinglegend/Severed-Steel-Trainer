﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_RPG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NPC_ALS_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_RPG.NPC_RPG_C
// 0x0030 (0x0F50 - 0x0F20)
class ANPC_RPG_C final : public ANPC_ALS_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_RPG_C;                          // 0x0F20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   RightFlash;                                        // 0x0F28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   LeftFlash;                                         // 0x0F30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RocketBackpack_C*                   BP_RocketBackpack;                                 // 0x0F38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0F40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NPC_RPG(int32 EntryPoint);
	void NotifyUnragdollALS();
	void NotifyRagdollALS();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_RPG_C">();
	}
	static class ANPC_RPG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_RPG_C>();
	}
};
static_assert(alignof(ANPC_RPG_C) == 0x000010, "Wrong alignment on ANPC_RPG_C");
static_assert(sizeof(ANPC_RPG_C) == 0x000F50, "Wrong size on ANPC_RPG_C");
static_assert(offsetof(ANPC_RPG_C, UberGraphFrame_NPC_RPG_C) == 0x000F20, "Member 'ANPC_RPG_C::UberGraphFrame_NPC_RPG_C' has a wrong offset!");
static_assert(offsetof(ANPC_RPG_C, RightFlash) == 0x000F28, "Member 'ANPC_RPG_C::RightFlash' has a wrong offset!");
static_assert(offsetof(ANPC_RPG_C, LeftFlash) == 0x000F30, "Member 'ANPC_RPG_C::LeftFlash' has a wrong offset!");
static_assert(offsetof(ANPC_RPG_C, BP_RocketBackpack) == 0x000F38, "Member 'ANPC_RPG_C::BP_RocketBackpack' has a wrong offset!");
static_assert(offsetof(ANPC_RPG_C, Audio) == 0x000F40, "Member 'ANPC_RPG_C::Audio' has a wrong offset!");

}

