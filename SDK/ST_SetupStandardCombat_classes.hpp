﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_SetupStandardCombat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_SetupStandardCombat.ST_SetupStandardCombat_C
// 0x0008 (0x00B0 - 0x00A8)
class UST_SetupStandardCombat_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ST_SetupStandardCombat(int32 EntryPoint);
	void ReceiveExecute(class AActor* OwnerActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_SetupStandardCombat_C">();
	}
	static class UST_SetupStandardCombat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_SetupStandardCombat_C>();
	}
};
static_assert(alignof(UST_SetupStandardCombat_C) == 0x000008, "Wrong alignment on UST_SetupStandardCombat_C");
static_assert(sizeof(UST_SetupStandardCombat_C) == 0x0000B0, "Wrong size on UST_SetupStandardCombat_C");
static_assert(offsetof(UST_SetupStandardCombat_C, UberGraphFrame) == 0x0000A8, "Member 'UST_SetupStandardCombat_C::UberGraphFrame' has a wrong offset!");

}

