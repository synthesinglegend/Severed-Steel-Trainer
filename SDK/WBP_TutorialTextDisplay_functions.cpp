﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialTextDisplay

#include "Basic.hpp"

#include "WBP_TutorialTextDisplay_classes.hpp"
#include "WBP_TutorialTextDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.ExecuteUbergraph_WBP_TutorialTextDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialTextDisplay_C::ExecuteUbergraph_WBP_TutorialTextDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "ExecuteUbergraph_WBP_TutorialTextDisplay");

	Params::WBP_TutorialTextDisplay_C_ExecuteUbergraph_WBP_TutorialTextDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.MarkAsComplete
// (Event, Public, BlueprintEvent)

void UWBP_TutorialTextDisplay_C::MarkAsComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "MarkAsComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TutorialTextDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_0_OnHorizonDialogueCharAdvancedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialTextDisplay_C::BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_0_OnHorizonDialogueCharAdvancedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_0_OnHorizonDialogueCharAdvancedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_1_OnHorizonDialogueMsgEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TutorialTextDisplay_C::BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_1_OnHorizonDialogueMsgEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_1_OnHorizonDialogueMsgEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TutorialTextDisplay_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "OnMouseButtonDown");

	Params::WBP_TutorialTextDisplay_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TutorialTextDisplay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "OnKeyDown");

	Params::WBP_TutorialTextDisplay_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TutorialTextDisplay.WBP_TutorialTextDisplay_C.GetContentColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWBP_TutorialTextDisplay_C::GetContentColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialTextDisplay_C", "GetContentColorAndOpacity_0");

	Params::WBP_TutorialTextDisplay_C_GetContentColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

