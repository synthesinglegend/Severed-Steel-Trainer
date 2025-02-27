﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolDims

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolDims.WBP_ToolDims_C
// 0x0018 (0x0278 - 0x0260)
class UWBP_ToolDims_C final : public UUserWidget
{
public:
	class UTextBlock*                             X;                                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Y;                                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Z;                                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDims(const struct FIntVector& In);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolDims_C">();
	}
	static class UWBP_ToolDims_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolDims_C>();
	}
};
static_assert(alignof(UWBP_ToolDims_C) == 0x000008, "Wrong alignment on UWBP_ToolDims_C");
static_assert(sizeof(UWBP_ToolDims_C) == 0x000278, "Wrong size on UWBP_ToolDims_C");
static_assert(offsetof(UWBP_ToolDims_C, X) == 0x000260, "Member 'UWBP_ToolDims_C::X' has a wrong offset!");
static_assert(offsetof(UWBP_ToolDims_C, Y) == 0x000268, "Member 'UWBP_ToolDims_C::Y' has a wrong offset!");
static_assert(offsetof(UWBP_ToolDims_C, Z) == 0x000270, "Member 'UWBP_ToolDims_C::Z' has a wrong offset!");

}

