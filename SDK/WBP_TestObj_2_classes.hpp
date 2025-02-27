﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TestObj_2

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TestObj_2.WBP_TestObj_2_C
// 0x0020 (0x0280 - 0x0260)
class UWBP_TestObj_2_C final : public UUserWidget
{
public:
	class UTextBlock*                             Distance;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_23;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TestObj_2_C">();
	}
	static class UWBP_TestObj_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TestObj_2_C>();
	}
};
static_assert(alignof(UWBP_TestObj_2_C) == 0x000008, "Wrong alignment on UWBP_TestObj_2_C");
static_assert(sizeof(UWBP_TestObj_2_C) == 0x000280, "Wrong size on UWBP_TestObj_2_C");
static_assert(offsetof(UWBP_TestObj_2_C, Distance) == 0x000260, "Member 'UWBP_TestObj_2_C::Distance' has a wrong offset!");
static_assert(offsetof(UWBP_TestObj_2_C, Image_23) == 0x000268, "Member 'UWBP_TestObj_2_C::Image_23' has a wrong offset!");
static_assert(offsetof(UWBP_TestObj_2_C, RetainerBox_0) == 0x000270, "Member 'UWBP_TestObj_2_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_TestObj_2_C, SizeBox_0) == 0x000278, "Member 'UWBP_TestObj_2_C::SizeBox_0' has a wrong offset!");

}

