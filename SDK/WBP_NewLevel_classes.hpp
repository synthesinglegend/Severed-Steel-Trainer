﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NewLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_EditorMenuMode_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NewLevel.WBP_NewLevel_C
// 0x0038 (0x0298 - 0x0260)
class UWBP_NewLevel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AdamButton_C*                      CreateButton;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_64;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_47;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ValidityReport;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& Name)> NameChoosen;                                       // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_NewLevel(int32 EntryPoint);
	void BndEvt__WBP_NewLevel_CreateButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void ProcessName();
	void NotifyShown(E_EditorMenuMode ForMode);
	void BndEvt__WBP_NewLevel_EditableTextBox_64_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NewLevel_C">();
	}
	static class UWBP_NewLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NewLevel_C>();
	}
};
static_assert(alignof(UWBP_NewLevel_C) == 0x000008, "Wrong alignment on UWBP_NewLevel_C");
static_assert(sizeof(UWBP_NewLevel_C) == 0x000298, "Wrong size on UWBP_NewLevel_C");
static_assert(offsetof(UWBP_NewLevel_C, UberGraphFrame) == 0x000260, "Member 'UWBP_NewLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NewLevel_C, CreateButton) == 0x000268, "Member 'UWBP_NewLevel_C::CreateButton' has a wrong offset!");
static_assert(offsetof(UWBP_NewLevel_C, EditableTextBox_64) == 0x000270, "Member 'UWBP_NewLevel_C::EditableTextBox_64' has a wrong offset!");
static_assert(offsetof(UWBP_NewLevel_C, TextBlock_47) == 0x000278, "Member 'UWBP_NewLevel_C::TextBlock_47' has a wrong offset!");
static_assert(offsetof(UWBP_NewLevel_C, ValidityReport) == 0x000280, "Member 'UWBP_NewLevel_C::ValidityReport' has a wrong offset!");
static_assert(offsetof(UWBP_NewLevel_C, NameChoosen) == 0x000288, "Member 'UWBP_NewLevel_C::NameChoosen' has a wrong offset!");

}

