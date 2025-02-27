﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Fresh

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Fresh.WBP_Fresh_C
// 0x0028 (0x0288 - 0x0260)
class UWBP_Fresh_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_116;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MyDelay;                                           // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFresh;                                            // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_Fresh(int32 EntryPoint);
	void RunAnim(EFeat Points, float Delay);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DoIt();
	void CustomEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Fresh_C">();
	}
	static class UWBP_Fresh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Fresh_C>();
	}
};
static_assert(alignof(UWBP_Fresh_C) == 0x000008, "Wrong alignment on UWBP_Fresh_C");
static_assert(sizeof(UWBP_Fresh_C) == 0x000288, "Wrong size on UWBP_Fresh_C");
static_assert(offsetof(UWBP_Fresh_C, UberGraphFrame) == 0x000260, "Member 'UWBP_Fresh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Fresh_C, NewAnimation) == 0x000268, "Member 'UWBP_Fresh_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Fresh_C, TextBlock) == 0x000270, "Member 'UWBP_Fresh_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_Fresh_C, TextBlock_116) == 0x000278, "Member 'UWBP_Fresh_C::TextBlock_116' has a wrong offset!");
static_assert(offsetof(UWBP_Fresh_C, MyDelay) == 0x000280, "Member 'UWBP_Fresh_C::MyDelay' has a wrong offset!");
static_assert(offsetof(UWBP_Fresh_C, bFresh) == 0x000284, "Member 'UWBP_Fresh_C::bFresh' has a wrong offset!");

}

