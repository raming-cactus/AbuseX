#pragma once
#include <cstdint>

namespace Offsets {
// ======================= 
    // ===== FakeDataModel ===
    // =======================
    constexpr uintptr_t FakeDataModelPointer = 0x7D909F8;
    constexpr uintptr_t FakeDataModelToDataModel = 0x1C0;

    // ======================= 
    // ===== VisualEngine ====
    // =======================
    constexpr uintptr_t VisualEnginePointer = 0x79449E0;
    constexpr uintptr_t VisualEngine = 0x10;
    constexpr uintptr_t ViewMatrix = 0x120;

    // ======================= 
    // ===== Instance ========
    // =======================
    constexpr uintptr_t ClassDescriptor = 0x18;
    constexpr uintptr_t ClassDescriptorToClassName = 0x8;
    constexpr uintptr_t Name = 0xB0;
    constexpr uintptr_t Parent = 0x68;
    constexpr uintptr_t Children = 0x70;
    constexpr uintptr_t ChildrenEnd = 0x8;
    constexpr uintptr_t StringLength = 0x10;

    // ======================= 
    // ===== BasePart ========
    // =======================
    constexpr uintptr_t CFrame = 0xC0;
    constexpr uintptr_t Position = 0xE4;
    constexpr uintptr_t Primitive = 0x148;

    // ======================= 
    // ===== Player ==========
    // =======================
    constexpr uintptr_t LocalPlayer = 0x130;
    constexpr uintptr_t ModelInstance = 0x380;

    // ======================= 
    // ===== Humanoid ========
    // =======================
    constexpr uintptr_t WalkSpeed = 0x1D4;
    constexpr uintptr_t WalkSpeedCheck = 0x3C0;
    constexpr uintptr_t JumpPower = 0x1B0;
    constexpr uintptr_t HipHeight = 0x1A0;
    constexpr uintptr_t Sit = 0x1DC;
    constexpr uintptr_t AutoJumpEnabled = 0x1DB;
    constexpr uintptr_t Health = 0x194;
    constexpr uintptr_t MaxHealth = 0x1B4;

    // ======================= 
    // ===== Camera ==========
    // =======================
    constexpr uintptr_t FieldOfView = 0x160;
    constexpr uintptr_t CameraMaxZoomDistance = 0x310;
    constexpr uintptr_t CameraMinZoomDistance = 0x314;

    // ======================= 
    // ===== Environment =====
    // =======================
    constexpr uintptr_t ClockTime = 0x1B8;
    constexpr uintptr_t FogEnd = 0x134;
    constexpr uintptr_t FogStart = 0x138;
    constexpr uintptr_t FogColor = 0xFC;
    constexpr uintptr_t Gravity = 0xA28;
}
