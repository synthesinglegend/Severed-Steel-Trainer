﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_WeaponRapid

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_WeaponRapid.BPC_WeaponRapid_C
// 0x0018 (0x00A8 - 0x0090)
class UBPC_WeaponRapid_C final : public UCardData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0090(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                         wEPS;                                              // 0x0098(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BPC_WeaponRapid(int32 EntryPoint);
	void OnLevelEnd();
	void OnFirstAdded();
	void GetRandomWep(class UClass** OutWep);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_WeaponRapid_C">();
	}
	static class UBPC_WeaponRapid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_WeaponRapid_C>();
	}
};
static_assert(alignof(UBPC_WeaponRapid_C) == 0x000008, "Wrong alignment on UBPC_WeaponRapid_C");
static_assert(sizeof(UBPC_WeaponRapid_C) == 0x0000A8, "Wrong size on UBPC_WeaponRapid_C");
static_assert(offsetof(UBPC_WeaponRapid_C, UberGraphFrame) == 0x000090, "Member 'UBPC_WeaponRapid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_WeaponRapid_C, wEPS) == 0x000098, "Member 'UBPC_WeaponRapid_C::wEPS' has a wrong offset!");

}

