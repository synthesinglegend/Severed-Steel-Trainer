﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SayWithRandomResponder

#include "Basic.hpp"

#include "ThankYouVeryCool_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_SayWithRandomResponder.BTTask_SayWithRandomResponder_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTTask_SayWithRandomResponder_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSentence>                      Dialogue;                                          // 0x00B0(0x0010)(Edit, BlueprintVisible)
	bool                                          OverrideTimer;                                     // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSentence>                      Responses;                                         // 0x00C8(0x0010)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_SayWithRandomResponder(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_SayWithRandomResponder_C">();
	}
	static class UBTTask_SayWithRandomResponder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_SayWithRandomResponder_C>();
	}
};
static_assert(alignof(UBTTask_SayWithRandomResponder_C) == 0x000008, "Wrong alignment on UBTTask_SayWithRandomResponder_C");
static_assert(sizeof(UBTTask_SayWithRandomResponder_C) == 0x0000D8, "Wrong size on UBTTask_SayWithRandomResponder_C");
static_assert(offsetof(UBTTask_SayWithRandomResponder_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_SayWithRandomResponder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_SayWithRandomResponder_C, Dialogue) == 0x0000B0, "Member 'UBTTask_SayWithRandomResponder_C::Dialogue' has a wrong offset!");
static_assert(offsetof(UBTTask_SayWithRandomResponder_C, OverrideTimer) == 0x0000C0, "Member 'UBTTask_SayWithRandomResponder_C::OverrideTimer' has a wrong offset!");
static_assert(offsetof(UBTTask_SayWithRandomResponder_C, Responses) == 0x0000C8, "Member 'UBTTask_SayWithRandomResponder_C::Responses' has a wrong offset!");

}

