﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Pro90

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Pro90.ABP_Pro90_C
// 0x0100 (0x03D0 - 0x02D0)
class UABP_Pro90_C final : public UGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x02D8(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0358(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03A0(0x0030)()

public:
	void ExecuteUbergraph_ABP_Pro90(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Pro90_C">();
	}
	static class UABP_Pro90_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Pro90_C>();
	}
};
static_assert(alignof(UABP_Pro90_C) == 0x000010, "Wrong alignment on UABP_Pro90_C");
static_assert(sizeof(UABP_Pro90_C) == 0x0003D0, "Wrong size on UABP_Pro90_C");
static_assert(offsetof(UABP_Pro90_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_Pro90_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Pro90_C, AnimGraphNode_SequencePlayer) == 0x0002D8, "Member 'UABP_Pro90_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Pro90_C, AnimGraphNode_Slot) == 0x000358, "Member 'UABP_Pro90_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Pro90_C, AnimGraphNode_Root) == 0x0003A0, "Member 'UABP_Pro90_C::AnimGraphNode_Root' has a wrong offset!");

}

