﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EditorMainNav

#include "Basic.hpp"

#include "WBP_EditorMainNav_classes.hpp"
#include "WBP_EditorMainNav_parameters.hpp"


namespace SDK
{

// Function WBP_EditorMainNav.WBP_EditorMainNav_C.ExecuteUbergraph_WBP_EditorMainNav
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EditorMainNav_C::ExecuteUbergraph_WBP_EditorMainNav(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EditorMainNav_C", "ExecuteUbergraph_WBP_EditorMainNav");

	Params::WBP_EditorMainNav_C_ExecuteUbergraph_WBP_EditorMainNav Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EditorMainNav.WBP_EditorMainNav_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EditorMainNav_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EditorMainNav_C", "SetSelected");

	Params::WBP_EditorMainNav_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EditorMainNav.WBP_EditorMainNav_C.BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_EditorMainNav_C::BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EditorMainNav_C", "BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EditorMainNav.WBP_EditorMainNav_C.BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_EditorMainNav_C::BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EditorMainNav_C", "BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EditorMainNav.WBP_EditorMainNav_C.BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_EditorMainNav_C::BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EditorMainNav_C", "BndEvt__WBP_EditorMainNav_Button_24_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EditorMainNav.WBP_EditorMainNav_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EditorMainNav_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EditorMainNav_C", "PreConstruct");

	Params::WBP_EditorMainNav_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

