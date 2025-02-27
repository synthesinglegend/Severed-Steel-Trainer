﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoxelHelpers

#include "Basic.hpp"


namespace SDK::Params
{

// Function VoxelHelpers.VoxelHelpersLibrary.CreateProcMeshPlane
// 0x0018 (0x0018 - 0x0000)
struct VoxelHelpersLibrary_CreateProcMeshPlane final
{
public:
	class UProceduralMeshComponent*               Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeX;                                             // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Step;                                              // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VoxelHelpersLibrary_CreateProcMeshPlane) == 0x000008, "Wrong alignment on VoxelHelpersLibrary_CreateProcMeshPlane");
static_assert(sizeof(VoxelHelpersLibrary_CreateProcMeshPlane) == 0x000018, "Wrong size on VoxelHelpersLibrary_CreateProcMeshPlane");
static_assert(offsetof(VoxelHelpersLibrary_CreateProcMeshPlane, Mesh) == 0x000000, "Member 'VoxelHelpersLibrary_CreateProcMeshPlane::Mesh' has a wrong offset!");
static_assert(offsetof(VoxelHelpersLibrary_CreateProcMeshPlane, SizeX) == 0x000008, "Member 'VoxelHelpersLibrary_CreateProcMeshPlane::SizeX' has a wrong offset!");
static_assert(offsetof(VoxelHelpersLibrary_CreateProcMeshPlane, SizeY) == 0x00000C, "Member 'VoxelHelpersLibrary_CreateProcMeshPlane::SizeY' has a wrong offset!");
static_assert(offsetof(VoxelHelpersLibrary_CreateProcMeshPlane, Step) == 0x000010, "Member 'VoxelHelpersLibrary_CreateProcMeshPlane::Step' has a wrong offset!");

}

