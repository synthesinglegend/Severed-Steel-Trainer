﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBO_EditorObj

#include "Basic.hpp"

#include "WBO_EditorObj_classes.hpp"
#include "WBO_EditorObj_parameters.hpp"


namespace SDK
{

// Function WBO_EditorObj.WBO_EditorObj_C.ExecuteUbergraph_WBO_EditorObj
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBO_EditorObj_C::ExecuteUbergraph_WBO_EditorObj(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "ExecuteUbergraph_WBO_EditorObj");

	Params::WBO_EditorObj_C_ExecuteUbergraph_WBO_EditorObj Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBO_EditorObj.WBO_EditorObj_C.WeaponSelected_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             DisplayName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                           WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBO_EditorObj_C::WeaponSelected_Event_0(const class FText& DisplayName, class UClass* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "WeaponSelected_Event_0");

	Params::WBO_EditorObj_C_WeaponSelected_Event_0 Parms{};

	Parms.DisplayName = std::move(DisplayName);
	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBO_EditorObj.WBO_EditorObj_C.BndEvt__WBO_EditorObj_WBP_AdamButton_339_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBO_EditorObj_C::BndEvt__WBO_EditorObj_WBP_AdamButton_339_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "BndEvt__WBO_EditorObj_WBP_AdamButton_339_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.BndEvt__WBO_EditorObj_ComboBoxString_430_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBO_EditorObj_C::BndEvt__WBO_EditorObj_ComboBoxString_430_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "BndEvt__WBO_EditorObj_ComboBoxString_430_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::WBO_EditorObj_C_BndEvt__WBO_EditorObj_ComboBoxString_430_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBO_EditorObj.WBO_EditorObj_C.BndEvt__WBO_EditorObj_WBP_AdamButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBO_EditorObj_C::BndEvt__WBO_EditorObj_WBP_AdamButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "BndEvt__WBO_EditorObj_WBP_AdamButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.BndEvt__WBO_EditorObj_CampaignBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBO_EditorObj_C::BndEvt__WBO_EditorObj_CampaignBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "BndEvt__WBO_EditorObj_CampaignBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.SendDataToAsset
// (BlueprintCallable, BlueprintEvent)

void UWBO_EditorObj_C::SendDataToAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "SendDataToAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.BndEvt__WBO_EditorObj_FFBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBO_EditorObj_C::BndEvt__WBO_EditorObj_FFBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "BndEvt__WBO_EditorObj_FFBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.NotifyShown
// (BlueprintCallable, BlueprintEvent)

void UWBO_EditorObj_C::NotifyShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "NotifyShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBO_EditorObj_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.GetChapterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorkshopChapterData             OutData                                                (Parm, OutParm)

void UWBO_EditorObj_C::GetChapterData(struct FWorkshopChapterData* OutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "GetChapterData");

	Params::WBO_EditorObj_C_GetChapterData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);
}


// Function WBO_EditorObj.WBO_EditorObj_C.Load Chapter Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBO_EditorObj_C::Load_Chapter_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "Load Chapter Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_EditorObj.WBO_EditorObj_C.On_MusicBox_GenerateWidget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBO_EditorObj_C::On_MusicBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "On_MusicBox_GenerateWidget_0");

	Params::WBO_EditorObj_C_On_MusicBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBO_EditorObj.WBO_EditorObj_C.OnGenerateWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBO_EditorObj_C::OnGenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_EditorObj_C", "OnGenerateWidget_0");

	Params::WBO_EditorObj_C_OnGenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

