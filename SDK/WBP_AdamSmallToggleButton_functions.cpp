﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AdamSmallToggleButton

#include "Basic.hpp"

#include "WBP_AdamSmallToggleButton_classes.hpp"
#include "WBP_AdamSmallToggleButton_parameters.hpp"


namespace SDK
{

// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.ExecuteUbergraph_WBP_AdamSmallToggleButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AdamSmallToggleButton_C::ExecuteUbergraph_WBP_AdamSmallToggleButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "ExecuteUbergraph_WBP_AdamSmallToggleButton");

	Params::WBP_AdamSmallToggleButton_C_ExecuteUbergraph_WBP_AdamSmallToggleButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.BndEvt__WBP_AdamSmallToggleButton_Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdamSmallToggleButton_C::BndEvt__WBP_AdamSmallToggleButton_Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "BndEvt__WBP_AdamSmallToggleButton_Button_79_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.BndEvt__WBP_AdamSmallToggleButton_Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdamSmallToggleButton_C::BndEvt__WBP_AdamSmallToggleButton_Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "BndEvt__WBP_AdamSmallToggleButton_Button_79_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.SimulateCLick
// (BlueprintCallable, BlueprintEvent)

void UWBP_AdamSmallToggleButton_C::SimulateCLick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "SimulateCLick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AdamSmallToggleButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AdamSmallToggleButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "PreConstruct");

	Params::WBP_AdamSmallToggleButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.ControllerSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AdamSmallToggleButton_C::ControllerSwapped(bool bIsController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "ControllerSwapped");

	Params::WBP_AdamSmallToggleButton_C_ControllerSwapped Parms{};

	Parms.bIsController = bIsController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_AdamSmallToggleButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "OnRemovedFromFocusPath");

	Params::WBP_AdamSmallToggleButton_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_AdamSmallToggleButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "OnAddedToFocusPath");

	Params::WBP_AdamSmallToggleButton_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AdamSmallToggleButton_C::BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AdamSmallToggleButton.WBP_AdamSmallToggleButton_C.SetStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AdamSmallToggleButton_C::SetStatus(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AdamSmallToggleButton_C", "SetStatus");

	Params::WBP_AdamSmallToggleButton_C_SetStatus Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

