﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RecordRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RecordRow.WBP_RecordRow_C
// 0x0020 (0x0280 - 0x0260)
class UWBP_RecordRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ScoreText;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeText;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Score;                                             // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_RecordRow(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RecordRow_C">();
	}
	static class UWBP_RecordRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RecordRow_C>();
	}
};
static_assert(alignof(UWBP_RecordRow_C) == 0x000008, "Wrong alignment on UWBP_RecordRow_C");
static_assert(sizeof(UWBP_RecordRow_C) == 0x000280, "Wrong size on UWBP_RecordRow_C");
static_assert(offsetof(UWBP_RecordRow_C, UberGraphFrame) == 0x000260, "Member 'UWBP_RecordRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RecordRow_C, ScoreText) == 0x000268, "Member 'UWBP_RecordRow_C::ScoreText' has a wrong offset!");
static_assert(offsetof(UWBP_RecordRow_C, TimeText) == 0x000270, "Member 'UWBP_RecordRow_C::TimeText' has a wrong offset!");
static_assert(offsetof(UWBP_RecordRow_C, Time) == 0x000278, "Member 'UWBP_RecordRow_C::Time' has a wrong offset!");
static_assert(offsetof(UWBP_RecordRow_C, Score) == 0x00027C, "Member 'UWBP_RecordRow_C::Score' has a wrong offset!");

}

