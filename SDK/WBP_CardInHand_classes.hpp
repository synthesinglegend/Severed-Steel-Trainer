﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CardInHand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CardInHand.WBP_CardInHand_C
// 0x0040 (0x02A0 - 0x0260)
class UWBP_CardInHand_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             multi;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NewCollect;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCardData*                              MYCard;                                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bForHUD;                                           // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_CardInHand(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CardInHand_C">();
	}
	static class UWBP_CardInHand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CardInHand_C>();
	}
};
static_assert(alignof(UWBP_CardInHand_C) == 0x000008, "Wrong alignment on UWBP_CardInHand_C");
static_assert(sizeof(UWBP_CardInHand_C) == 0x0002A0, "Wrong size on UWBP_CardInHand_C");
static_assert(offsetof(UWBP_CardInHand_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CardInHand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, multi) == 0x000268, "Member 'UWBP_CardInHand_C::multi' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, Name_0) == 0x000270, "Member 'UWBP_CardInHand_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, NewCollect) == 0x000278, "Member 'UWBP_CardInHand_C::NewCollect' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, TextBlock_1) == 0x000280, "Member 'UWBP_CardInHand_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, TextBlock_2) == 0x000288, "Member 'UWBP_CardInHand_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, MYCard) == 0x000290, "Member 'UWBP_CardInHand_C::MYCard' has a wrong offset!");
static_assert(offsetof(UWBP_CardInHand_C, bForHUD) == 0x000298, "Member 'UWBP_CardInHand_C::bForHUD' has a wrong offset!");

}

