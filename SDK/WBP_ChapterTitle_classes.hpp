﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChapterTitle

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ChapterTitle.WBP_ChapterTitle_C
// 0x0008 (0x0268 - 0x0260)
class UWBP_ChapterTitle_C final : public UUserWidget
{
public:
	class UTextBlock*                             Text;                                              // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetupText(const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ChapterTitle_C">();
	}
	static class UWBP_ChapterTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ChapterTitle_C>();
	}
};
static_assert(alignof(UWBP_ChapterTitle_C) == 0x000008, "Wrong alignment on UWBP_ChapterTitle_C");
static_assert(sizeof(UWBP_ChapterTitle_C) == 0x000268, "Wrong size on UWBP_ChapterTitle_C");
static_assert(offsetof(UWBP_ChapterTitle_C, Text) == 0x000260, "Member 'UWBP_ChapterTitle_C::Text' has a wrong offset!");

}

