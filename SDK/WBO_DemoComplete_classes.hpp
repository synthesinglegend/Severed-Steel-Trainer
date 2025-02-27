﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBO_DemoComplete

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBO_DemoComplete.WBO_DemoComplete_C
// 0x0020 (0x0280 - 0x0260)
class UWBO_DemoComplete_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AdamButton_C*                      WBP_AdamButton;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              NotifyClosed;                                      // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBO_DemoComplete(int32 EntryPoint);
	void BndEvt__WBO_DemoComplete_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void OnShown();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBO_DemoComplete_C">();
	}
	static class UWBO_DemoComplete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBO_DemoComplete_C>();
	}
};
static_assert(alignof(UWBO_DemoComplete_C) == 0x000008, "Wrong alignment on UWBO_DemoComplete_C");
static_assert(sizeof(UWBO_DemoComplete_C) == 0x000280, "Wrong size on UWBO_DemoComplete_C");
static_assert(offsetof(UWBO_DemoComplete_C, UberGraphFrame) == 0x000260, "Member 'UWBO_DemoComplete_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBO_DemoComplete_C, WBP_AdamButton) == 0x000268, "Member 'UWBO_DemoComplete_C::WBP_AdamButton' has a wrong offset!");
static_assert(offsetof(UWBO_DemoComplete_C, NotifyClosed) == 0x000270, "Member 'UWBO_DemoComplete_C::NotifyClosed' has a wrong offset!");

}

