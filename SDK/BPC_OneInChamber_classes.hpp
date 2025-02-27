﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_OneInChamber

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_OneInChamber.BPC_OneInChamber_C
// 0x0008 (0x0098 - 0x0090)
class UBPC_OneInChamber_C final : public UCardData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0090(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPC_OneInChamber(int32 EntryPoint);
	void OnFirstAdded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_OneInChamber_C">();
	}
	static class UBPC_OneInChamber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_OneInChamber_C>();
	}
};
static_assert(alignof(UBPC_OneInChamber_C) == 0x000008, "Wrong alignment on UBPC_OneInChamber_C");
static_assert(sizeof(UBPC_OneInChamber_C) == 0x000098, "Wrong size on UBPC_OneInChamber_C");
static_assert(offsetof(UBPC_OneInChamber_C, UberGraphFrame) == 0x000090, "Member 'UBPC_OneInChamber_C::UberGraphFrame' has a wrong offset!");

}

