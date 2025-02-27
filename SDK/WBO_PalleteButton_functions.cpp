﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBO_PalleteButton

#include "Basic.hpp"

#include "WBO_PalleteButton_classes.hpp"
#include "WBO_PalleteButton_parameters.hpp"


namespace SDK
{

// Function WBO_PalleteButton.WBO_PalleteButton_C.ExecuteUbergraph_WBO_PalleteButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBO_PalleteButton_C::ExecuteUbergraph_WBO_PalleteButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "ExecuteUbergraph_WBO_PalleteButton");

	Params::WBO_PalleteButton_C_ExecuteUbergraph_WBO_PalleteButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.ForceHover
// (BlueprintCallable, BlueprintEvent)

void UWBO_PalleteButton_C::ForceHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "ForceHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBO_PalleteButton_C::BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBO_PalleteButton_C::BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBO_PalleteButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBO_PalleteButton_C::BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBO_PalleteButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "PreConstruct");

	Params::WBO_PalleteButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBO_PalleteButton.WBO_PalleteButton_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBO_PalleteButton_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBO_PalleteButton_C", "SetSelected");

	Params::WBO_PalleteButton_C_SetSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

