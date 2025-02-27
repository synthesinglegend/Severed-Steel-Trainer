﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadStruct

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct HeadStruct.HeadStruct
// 0x0060 (0x0060 - 0x0000)
struct FHeadStruct final
{
public:
	float                                         TrackRadius_8_4AEBE2E4400DA4ED26CC2886AC2BE7AC;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FireRate_22_F93431B4456BAB743C59A2A267F513BB;      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LaserLength_24_F296557F4A9869CE9D2168B56A705DCE;   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadHealth_66_6734F106478CFD3FF2F5DFBC96B96C63;    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LaserColor_59_81E44D5240EE67ECF79234A51D242401;    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EObjectTypeQuery                              ObjectTrace_11_8227B1D145E5833A95EBFBA4F806F7ED;   // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      TraceBlockers_18_A383DD0F4B3213DC4C61B7870AC4B429; // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          HideLaserOnHit_14_C0E9B1F74ABC793987DD1E8CCFC69F56; // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HideTrackingLaser_51_A6B8FDFF4CDD62D77D9DBE99DE755618; // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               LaserAdjustment_55_A7B91A9E462FA1A9318ECB984D05189D; // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         IgnoreActors_41_3256D6BF497ADAAF30B67FA3ACC6E7E2;  // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	EDrawDebugTrace                               DeBugLines_58_02CFF2F64B68F49516104486AD22F8E5;    // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FHeadStruct) == 0x000008, "Wrong alignment on FHeadStruct");
static_assert(sizeof(FHeadStruct) == 0x000060, "Wrong size on FHeadStruct");
static_assert(offsetof(FHeadStruct, TrackRadius_8_4AEBE2E4400DA4ED26CC2886AC2BE7AC) == 0x000000, "Member 'FHeadStruct::TrackRadius_8_4AEBE2E4400DA4ED26CC2886AC2BE7AC' has a wrong offset!");
static_assert(offsetof(FHeadStruct, FireRate_22_F93431B4456BAB743C59A2A267F513BB) == 0x000004, "Member 'FHeadStruct::FireRate_22_F93431B4456BAB743C59A2A267F513BB' has a wrong offset!");
static_assert(offsetof(FHeadStruct, LaserLength_24_F296557F4A9869CE9D2168B56A705DCE) == 0x000008, "Member 'FHeadStruct::LaserLength_24_F296557F4A9869CE9D2168B56A705DCE' has a wrong offset!");
static_assert(offsetof(FHeadStruct, HeadHealth_66_6734F106478CFD3FF2F5DFBC96B96C63) == 0x00000C, "Member 'FHeadStruct::HeadHealth_66_6734F106478CFD3FF2F5DFBC96B96C63' has a wrong offset!");
static_assert(offsetof(FHeadStruct, LaserColor_59_81E44D5240EE67ECF79234A51D242401) == 0x000010, "Member 'FHeadStruct::LaserColor_59_81E44D5240EE67ECF79234A51D242401' has a wrong offset!");
static_assert(offsetof(FHeadStruct, ObjectTrace_11_8227B1D145E5833A95EBFBA4F806F7ED) == 0x000020, "Member 'FHeadStruct::ObjectTrace_11_8227B1D145E5833A95EBFBA4F806F7ED' has a wrong offset!");
static_assert(offsetof(FHeadStruct, TraceBlockers_18_A383DD0F4B3213DC4C61B7870AC4B429) == 0x000028, "Member 'FHeadStruct::TraceBlockers_18_A383DD0F4B3213DC4C61B7870AC4B429' has a wrong offset!");
static_assert(offsetof(FHeadStruct, HideLaserOnHit_14_C0E9B1F74ABC793987DD1E8CCFC69F56) == 0x000038, "Member 'FHeadStruct::HideLaserOnHit_14_C0E9B1F74ABC793987DD1E8CCFC69F56' has a wrong offset!");
static_assert(offsetof(FHeadStruct, HideTrackingLaser_51_A6B8FDFF4CDD62D77D9DBE99DE755618) == 0x000039, "Member 'FHeadStruct::HideTrackingLaser_51_A6B8FDFF4CDD62D77D9DBE99DE755618' has a wrong offset!");
static_assert(offsetof(FHeadStruct, LaserAdjustment_55_A7B91A9E462FA1A9318ECB984D05189D) == 0x00003C, "Member 'FHeadStruct::LaserAdjustment_55_A7B91A9E462FA1A9318ECB984D05189D' has a wrong offset!");
static_assert(offsetof(FHeadStruct, IgnoreActors_41_3256D6BF497ADAAF30B67FA3ACC6E7E2) == 0x000048, "Member 'FHeadStruct::IgnoreActors_41_3256D6BF497ADAAF30B67FA3ACC6E7E2' has a wrong offset!");
static_assert(offsetof(FHeadStruct, DeBugLines_58_02CFF2F64B68F49516104486AD22F8E5) == 0x000058, "Member 'FHeadStruct::DeBugLines_58_02CFF2F64B68F49516104486AD22F8E5' has a wrong offset!");

}

