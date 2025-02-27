﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AdamButton_TextPayload

#include "Basic.hpp"

#include "WBP_AdamButton_TextPayload_classes.hpp"
#include "WBP_AdamButton_TextPayload_parameters.hpp"


namespace SDK
{

// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.ExecuteUbergraph_WBP_AdamButton_TextPayload
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AdamButton_TextPayload_C::ExecuteUbergraph_WBP_AdamButton_TextPayload(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "ExecuteUbergraph_WBP_AdamButton_TextPayload");

	Params::WBP_AdamButton_TextPayload_C_ExecuteUbergraph_WBP_AdamButton_TextPayload Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.BndEvt__WBP_AdamButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBP_AdamButton_TextPayload_C::BndEvt__WBP_AdamButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "BndEvt__WBP_AdamButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AdamButton_TextPayload_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "PreConstruct");

	Params::WBP_AdamButton_TextPayload_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AdamButton_TextPayload_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdamButton_TextPayload_C::BndEvt__Button_45_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "BndEvt__Button_45_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdamButton_TextPayload_C::BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "BndEvt__Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.SetAsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AdamButton_TextPayload_C::SetAsActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "SetAsActive");

	Params::WBP_AdamButton_TextPayload_C_SetAsActive Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamButton_TextPayload.WBP_AdamButton_TextPayload_C.SetImageViz
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Viz                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AdamButton_TextPayload_C::SetImageViz(bool Viz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamButton_TextPayload_C", "SetImageViz");

	Params::WBP_AdamButton_TextPayload_C_SetImageViz Parms{};

	Parms.Viz = Viz;

	UObject::ProcessEvent(Func, &Parms);
}

}

