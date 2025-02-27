﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HuntMeter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HuntMeter.WBP_HuntMeter_C
// 0x0018 (0x0278 - 0x0260)
class UWBP_HuntMeter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           MultiMeter;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         updatetime;                                        // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         updatecountdown;                                   // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HuntMeter(int32 EntryPoint);
	void CustomEvent_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	float Get_MultiMeter_Percent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HuntMeter_C">();
	}
	static class UWBP_HuntMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HuntMeter_C>();
	}
};
static_assert(alignof(UWBP_HuntMeter_C) == 0x000008, "Wrong alignment on UWBP_HuntMeter_C");
static_assert(sizeof(UWBP_HuntMeter_C) == 0x000278, "Wrong size on UWBP_HuntMeter_C");
static_assert(offsetof(UWBP_HuntMeter_C, UberGraphFrame) == 0x000260, "Member 'UWBP_HuntMeter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HuntMeter_C, MultiMeter) == 0x000268, "Member 'UWBP_HuntMeter_C::MultiMeter' has a wrong offset!");
static_assert(offsetof(UWBP_HuntMeter_C, updatetime) == 0x000270, "Member 'UWBP_HuntMeter_C::updatetime' has a wrong offset!");
static_assert(offsetof(UWBP_HuntMeter_C, updatecountdown) == 0x000274, "Member 'UWBP_HuntMeter_C::updatecountdown' has a wrong offset!");

}

