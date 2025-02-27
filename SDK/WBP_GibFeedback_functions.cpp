﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GibFeedback

#include "Basic.hpp"

#include "WBP_GibFeedback_classes.hpp"
#include "WBP_GibFeedback_parameters.hpp"


namespace SDK
{

// Function WBP_GibFeedback.WBP_GibFeedback_C.ExecuteUbergraph_WBP_GibFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GibFeedback_C::ExecuteUbergraph_WBP_GibFeedback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GibFeedback_C", "ExecuteUbergraph_WBP_GibFeedback");

	Params::WBP_GibFeedback_C_ExecuteUbergraph_WBP_GibFeedback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GibFeedback.WBP_GibFeedback_C.BndEvt__WBP_WishlistPlz_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBP_GibFeedback_C::BndEvt__WBP_WishlistPlz_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GibFeedback_C", "BndEvt__WBP_WishlistPlz_WBP_AdamButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

