﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Armcannon_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Armcannon_Skeleton_AnimBlueprint.SK_Armcannon_Skeleton_AnimBlueprint_C
// 0x0080 (0x0340 - 0x02C0)
class USK_Armcannon_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02F8(0x0048)()

public:
	void ExecuteUbergraph_SK_Armcannon_Skeleton_AnimBlueprint(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Armcannon_Skeleton_AnimBlueprint_C">();
	}
	static class USK_Armcannon_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Armcannon_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(USK_Armcannon_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on USK_Armcannon_Skeleton_AnimBlueprint_C");
static_assert(sizeof(USK_Armcannon_Skeleton_AnimBlueprint_C) == 0x000340, "Wrong size on USK_Armcannon_Skeleton_AnimBlueprint_C");
static_assert(offsetof(USK_Armcannon_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'USK_Armcannon_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_Armcannon_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'USK_Armcannon_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_Armcannon_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x0002F8, "Member 'USK_Armcannon_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");

}

