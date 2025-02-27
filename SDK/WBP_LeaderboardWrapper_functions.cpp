﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaderboardWrapper

#include "Basic.hpp"

#include "WBP_LeaderboardWrapper_classes.hpp"
#include "WBP_LeaderboardWrapper_parameters.hpp"


namespace SDK
{

// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.ExecuteUbergraph_WBP_LeaderboardWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaderboardWrapper_C::ExecuteUbergraph_WBP_LeaderboardWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "ExecuteUbergraph_WBP_LeaderboardWrapper");

	Params::WBP_LeaderboardWrapper_C_ExecuteUbergraph_WBP_LeaderboardWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.OnLBReadThrottled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_LeaderboardWrapper_C::OnLBReadThrottled_Event_0(const class FString& LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "OnLBReadThrottled_Event_0");

	Params::WBP_LeaderboardWrapper_C_OnLBReadThrottled_Event_0 Parms{};

	Parms.LevelName = std::move(LevelName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LeaderboardWrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.BndEvt__WBP_LeaderboardWrapper_ScoreToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardWrapper_C::BndEvt__WBP_LeaderboardWrapper_ScoreToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "BndEvt__WBP_LeaderboardWrapper_ScoreToggle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.BndEvt__WBP_LeaderboardWrapper_TimeToggle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardWrapper_C::BndEvt__WBP_LeaderboardWrapper_TimeToggle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "BndEvt__WBP_LeaderboardWrapper_TimeToggle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.BndEvt__WBP_LeaderboardWrapper_GlobalToggle_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardWrapper_C::BndEvt__WBP_LeaderboardWrapper_GlobalToggle_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "BndEvt__WBP_LeaderboardWrapper_GlobalToggle_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.BndEvt__WBP_LeaderboardWrapper_FriendsToggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardWrapper_C::BndEvt__WBP_LeaderboardWrapper_FriendsToggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "BndEvt__WBP_LeaderboardWrapper_FriendsToggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.OnLeaderboardUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaderboardWrapper_C::OnLeaderboardUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "OnLeaderboardUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.OnLeaderboardQueryDone
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaderboardWrapper_C::OnLeaderboardQueryDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "OnLeaderboardQueryDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.OnLeaderboardRefreshStarted
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaderboardWrapper_C::OnLeaderboardRefreshStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "OnLeaderboardRefreshStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.InitFromTogglles
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LeaderboardWrapper_C::InitFromTogglles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "InitFromTogglles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardWrapper.WBP_LeaderboardWrapper_C.SetListNavigation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaderboardWrapper_C::SetListNavigation(class UWidget* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardWrapper_C", "SetListNavigation");

	Params::WBP_LeaderboardWrapper_C_SetListNavigation Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

