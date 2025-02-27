﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FlagBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FlagBtn.WBP_FlagBtn_C
// 0x00A8 (0x0308 - 0x0260)
class UWBP_FlagBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_135;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 htch;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_46;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_38;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 ForLang;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& MyLang)> OnPressed;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, class UTexture2D*>        StringFlagMap;                                     // 0x02B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsMainButton;                                     // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_FlagBtn(int32 EntryPoint);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_FlagBtn_Button_135_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_FlagBtn_Button_135_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void DoLocal();
	void BndEvt__WBP_FlagBtn_Button_135_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetAsLocal(const class FString& MyLocak);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FlagBtn_C">();
	}
	static class UWBP_FlagBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FlagBtn_C>();
	}
};
static_assert(alignof(UWBP_FlagBtn_C) == 0x000008, "Wrong alignment on UWBP_FlagBtn_C");
static_assert(sizeof(UWBP_FlagBtn_C) == 0x000308, "Wrong size on UWBP_FlagBtn_C");
static_assert(offsetof(UWBP_FlagBtn_C, UberGraphFrame) == 0x000260, "Member 'UWBP_FlagBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, Border_0) == 0x000268, "Member 'UWBP_FlagBtn_C::Border_0' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, Button_135) == 0x000270, "Member 'UWBP_FlagBtn_C::Button_135' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, htch) == 0x000278, "Member 'UWBP_FlagBtn_C::htch' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, Image_46) == 0x000280, "Member 'UWBP_FlagBtn_C::Image_46' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, TextBlock_38) == 0x000288, "Member 'UWBP_FlagBtn_C::TextBlock_38' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, ForLang) == 0x000290, "Member 'UWBP_FlagBtn_C::ForLang' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, OnPressed) == 0x0002A0, "Member 'UWBP_FlagBtn_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, StringFlagMap) == 0x0002B0, "Member 'UWBP_FlagBtn_C::StringFlagMap' has a wrong offset!");
static_assert(offsetof(UWBP_FlagBtn_C, bIsMainButton) == 0x000300, "Member 'UWBP_FlagBtn_C::bIsMainButton' has a wrong offset!");

}

