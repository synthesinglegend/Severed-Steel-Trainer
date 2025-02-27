﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RogueEdensysDraw

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RogueEdensysDraw.WBP_RogueEdensysDraw_C
// 0x0038 (0x0298 - 0x0260)
class UWBP_RogueEdensysDraw_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Bigger;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      WBP_AdamButton;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CardBase_C*                        WBP_CardBase;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              PlayerDone;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_RogueEdensysDraw(int32 EntryPoint);
	void CustomEvent_0();
	void BndEvt__WBP_RogueEdensysDraw_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RogueEdensysDraw_C">();
	}
	static class UWBP_RogueEdensysDraw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RogueEdensysDraw_C>();
	}
};
static_assert(alignof(UWBP_RogueEdensysDraw_C) == 0x000008, "Wrong alignment on UWBP_RogueEdensysDraw_C");
static_assert(sizeof(UWBP_RogueEdensysDraw_C) == 0x000298, "Wrong size on UWBP_RogueEdensysDraw_C");
static_assert(offsetof(UWBP_RogueEdensysDraw_C, UberGraphFrame) == 0x000260, "Member 'UWBP_RogueEdensysDraw_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RogueEdensysDraw_C, Bigger) == 0x000268, "Member 'UWBP_RogueEdensysDraw_C::Bigger' has a wrong offset!");
static_assert(offsetof(UWBP_RogueEdensysDraw_C, Image_0) == 0x000270, "Member 'UWBP_RogueEdensysDraw_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_RogueEdensysDraw_C, WBP_AdamButton) == 0x000278, "Member 'UWBP_RogueEdensysDraw_C::WBP_AdamButton' has a wrong offset!");
static_assert(offsetof(UWBP_RogueEdensysDraw_C, WBP_CardBase) == 0x000280, "Member 'UWBP_RogueEdensysDraw_C::WBP_CardBase' has a wrong offset!");
static_assert(offsetof(UWBP_RogueEdensysDraw_C, PlayerDone) == 0x000288, "Member 'UWBP_RogueEdensysDraw_C::PlayerDone' has a wrong offset!");

}

