﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CDA_Barracks

#include "Basic.hpp"

#include "ThankYouVeryCool_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CDA_Barracks.CDA_Barracks_C
// 0x0000 (0x00A8 - 0x00A8)
class UCDA_Barracks_C final : public UCampaignDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CDA_Barracks_C">();
	}
	static class UCDA_Barracks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCDA_Barracks_C>();
	}
};
static_assert(alignof(UCDA_Barracks_C) == 0x000008, "Wrong alignment on UCDA_Barracks_C");
static_assert(sizeof(UCDA_Barracks_C) == 0x0000A8, "Wrong size on UCDA_Barracks_C");

}

