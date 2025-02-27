﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FocusOwner

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_FocusOwner.BPI_FocusOwner_C.HasOwnerFocus
// 0x0010 (0x0010 - 0x0000)
struct BPI_FocusOwner_C_HasOwnerFocus final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_FocusOwner_C_HasOwnerFocus) == 0x000008, "Wrong alignment on BPI_FocusOwner_C_HasOwnerFocus");
static_assert(sizeof(BPI_FocusOwner_C_HasOwnerFocus) == 0x000010, "Wrong size on BPI_FocusOwner_C_HasOwnerFocus");
static_assert(offsetof(BPI_FocusOwner_C_HasOwnerFocus, Widget) == 0x000000, "Member 'BPI_FocusOwner_C_HasOwnerFocus::Widget' has a wrong offset!");
static_assert(offsetof(BPI_FocusOwner_C_HasOwnerFocus, Value) == 0x000008, "Member 'BPI_FocusOwner_C_HasOwnerFocus::Value' has a wrong offset!");

// Function BPI_FocusOwner.BPI_FocusOwner_C.HasOwnerFocusForUser
// 0x0010 (0x0010 - 0x0000)
struct BPI_FocusOwner_C_HasOwnerFocusForUser final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UserIndex;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_FocusOwner_C_HasOwnerFocusForUser) == 0x000008, "Wrong alignment on BPI_FocusOwner_C_HasOwnerFocusForUser");
static_assert(sizeof(BPI_FocusOwner_C_HasOwnerFocusForUser) == 0x000010, "Wrong size on BPI_FocusOwner_C_HasOwnerFocusForUser");
static_assert(offsetof(BPI_FocusOwner_C_HasOwnerFocusForUser, Widget) == 0x000000, "Member 'BPI_FocusOwner_C_HasOwnerFocusForUser::Widget' has a wrong offset!");
static_assert(offsetof(BPI_FocusOwner_C_HasOwnerFocusForUser, UserIndex) == 0x000008, "Member 'BPI_FocusOwner_C_HasOwnerFocusForUser::UserIndex' has a wrong offset!");
static_assert(offsetof(BPI_FocusOwner_C_HasOwnerFocusForUser, Value) == 0x00000C, "Member 'BPI_FocusOwner_C_HasOwnerFocusForUser::Value' has a wrong offset!");

}

