﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PropCat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PropCat.WBP_PropCat_C
// 0x0050 (0x02B0 - 0x0260)
class UWBP_PropCat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MyList;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AdamButton_Icon_C*                 UploadButton;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   MyName;                                            // 0x0288(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMulticastInlineDelegate<void(class UWBP_PropCat_C* FromCat)> RequestUpload;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_PropCat(int32 EntryPoint);
	void BndEvt__WBP_PropCat_UploadButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void Expand();
	void Collapse();
	void BndEvt__WBP_PropCat_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PropCat_C">();
	}
	static class UWBP_PropCat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PropCat_C>();
	}
};
static_assert(alignof(UWBP_PropCat_C) == 0x000008, "Wrong alignment on UWBP_PropCat_C");
static_assert(sizeof(UWBP_PropCat_C) == 0x0002B0, "Wrong size on UWBP_PropCat_C");
static_assert(offsetof(UWBP_PropCat_C, UberGraphFrame) == 0x000260, "Member 'UWBP_PropCat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PropCat_C, Button_0) == 0x000268, "Member 'UWBP_PropCat_C::Button_0' has a wrong offset!");
static_assert(offsetof(UWBP_PropCat_C, MyList) == 0x000270, "Member 'UWBP_PropCat_C::MyList' has a wrong offset!");
static_assert(offsetof(UWBP_PropCat_C, TextBlock) == 0x000278, "Member 'UWBP_PropCat_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_PropCat_C, UploadButton) == 0x000280, "Member 'UWBP_PropCat_C::UploadButton' has a wrong offset!");
static_assert(offsetof(UWBP_PropCat_C, MyName) == 0x000288, "Member 'UWBP_PropCat_C::MyName' has a wrong offset!");
static_assert(offsetof(UWBP_PropCat_C, RequestUpload) == 0x0002A0, "Member 'UWBP_PropCat_C::RequestUpload' has a wrong offset!");

}

