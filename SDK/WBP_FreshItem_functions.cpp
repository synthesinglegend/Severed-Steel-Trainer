﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FreshItem

#include "Basic.hpp"

#include "WBP_FreshItem_classes.hpp"
#include "WBP_FreshItem_parameters.hpp"


namespace SDK
{

// Function WBP_FreshItem.WBP_FreshItem_C.ExecuteUbergraph_WBP_FreshItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FreshItem_C::ExecuteUbergraph_WBP_FreshItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FreshItem_C", "ExecuteUbergraph_WBP_FreshItem");

	Params::WBP_FreshItem_C_ExecuteUbergraph_WBP_FreshItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FreshItem.WBP_FreshItem_C.BndEvt__WBP_FreshItem_Button_117_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FreshItem_C::BndEvt__WBP_FreshItem_Button_117_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FreshItem_C", "BndEvt__WBP_FreshItem_Button_117_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FreshItem.WBP_FreshItem_C.BndEvt__WBP_FreshItem_Button_117_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FreshItem_C::BndEvt__WBP_FreshItem_Button_117_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FreshItem_C", "BndEvt__WBP_FreshItem_Button_117_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FreshItem.WBP_FreshItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_FreshItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FreshItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

