﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TextDisplay

#include "Basic.hpp"

#include "WBP_TextDisplay_classes.hpp"
#include "WBP_TextDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_TextDisplay.WBP_TextDisplay_C.ExecuteUbergraph_WBP_TextDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TextDisplay_C::ExecuteUbergraph_WBP_TextDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "ExecuteUbergraph_WBP_TextDisplay");

	Params::WBP_TextDisplay_C_ExecuteUbergraph_WBP_TextDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.SetupForCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacter                              InForCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TextDisplay_C::SetupForCharacter(ECharacter InForCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "SetupForCharacter");

	Params::WBP_TextDisplay_C_SetupForCharacter Parms{};

	Parms.InForCharacter = InForCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_1_OnHorizonDialogueMsgEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TextDisplay_C::BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_1_OnHorizonDialogueMsgEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_1_OnHorizonDialogueMsgEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_0_OnHorizonDialogueCharAdvancedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TextDisplay_C::BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_0_OnHorizonDialogueCharAdvancedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "BndEvt__IntermissionDialogue_K2Node_ComponentBoundEvent_0_OnHorizonDialogueCharAdvancedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TextDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TextDisplay_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "OnMouseButtonDown");

	Params::WBP_TextDisplay_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TextDisplay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "OnKeyDown");

	Params::WBP_TextDisplay_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.PlayerRequstedNext
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextDisplay_C::PlayerRequstedNext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "PlayerRequstedNext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TextDisplay.WBP_TextDisplay_C.WBP_TextDisplay_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextDisplay_C::WBP_TextDisplay_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TextDisplay_C", "WBP_TextDisplay_AutoGenFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

