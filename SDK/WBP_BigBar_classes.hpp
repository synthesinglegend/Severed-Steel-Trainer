﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BigBar

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BigBar.WBP_BigBar_C
// 0x0008 (0x0268 - 0x0260)
class UWBP_BigBar_C final : public UUserWidget
{
public:
	class UProgressBar*                           ProgressBar_44;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BigBar_C">();
	}
	static class UWBP_BigBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BigBar_C>();
	}
};
static_assert(alignof(UWBP_BigBar_C) == 0x000008, "Wrong alignment on UWBP_BigBar_C");
static_assert(sizeof(UWBP_BigBar_C) == 0x000268, "Wrong size on UWBP_BigBar_C");
static_assert(offsetof(UWBP_BigBar_C, ProgressBar_44) == 0x000260, "Member 'UWBP_BigBar_C::ProgressBar_44' has a wrong offset!");

}

