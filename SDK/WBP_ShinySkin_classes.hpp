﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ShinySkin

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ShinySkin.WBP_ShinySkin_C
// 0x0050 (0x02B0 - 0x0260)
class UWBP_ShinySkin_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Cost;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_36;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_C*                      WBP_AdamButton;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Coin_C*                            WBP_Coin;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EShineLevel                                   SkinCat;                                           // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UWBP_ShinySkin_C* me)> Hov;                                               // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWBP_ShinySkin_C* NewParam)> Prsdf;                                             // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_ShinySkin(int32 EntryPoint);
	void Construct();
	void SetToggled(bool tgl);
	void BndEvt__WBP_ShinySkin_WBP_AdamButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__WBP_ShinySkin_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ShinySkin_C">();
	}
	static class UWBP_ShinySkin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ShinySkin_C>();
	}
};
static_assert(alignof(UWBP_ShinySkin_C) == 0x000008, "Wrong alignment on UWBP_ShinySkin_C");
static_assert(sizeof(UWBP_ShinySkin_C) == 0x0002B0, "Wrong size on UWBP_ShinySkin_C");
static_assert(offsetof(UWBP_ShinySkin_C, UberGraphFrame) == 0x000260, "Member 'UWBP_ShinySkin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, Cost) == 0x000268, "Member 'UWBP_ShinySkin_C::Cost' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, Image_36) == 0x000270, "Member 'UWBP_ShinySkin_C::Image_36' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, WBP_AdamButton) == 0x000278, "Member 'UWBP_ShinySkin_C::WBP_AdamButton' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, WBP_Coin) == 0x000280, "Member 'UWBP_ShinySkin_C::WBP_Coin' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, SkinCat) == 0x000288, "Member 'UWBP_ShinySkin_C::SkinCat' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, Hov) == 0x000290, "Member 'UWBP_ShinySkin_C::Hov' has a wrong offset!");
static_assert(offsetof(UWBP_ShinySkin_C, Prsdf) == 0x0002A0, "Member 'UWBP_ShinySkin_C::Prsdf' has a wrong offset!");

}

