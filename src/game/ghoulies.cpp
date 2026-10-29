#include "ghoulies.h"

#include <array>
#include <optional>

#include "cpu/x86_ops.h"

namespace {
static std::optional<std::string> NextPlaycam = std::nullopt;
}  // namespace

auto game::TakeNextPlaycam() -> std::optional<std::string> {
    if (NextPlaycam) {
        return std::exchange(NextPlaycam, std::nullopt);
    }

    return std::nullopt;
}
void game::SetNextPlaycam(std::string_view str) { NextPlaycam = str; }

void game::SetPlaycamAIDRaw(std::uint8_t* base, std::string_view str) {
    const x86_u32u NextPlaycamPtr = 0x510ed8;

    std::array<char, 128> arr = {0};

    auto len{std::min(str.length(), 127ull)};

    str.copy(arr.data(), len);

    arr[len] = 0;

    for (const auto ptr : {NextPlaycamPtr, NextPlaycamPtr - 0x80}) {
        for (int i{0}; i < 128; i += 1) {
            X86_MEM8(ptr + i) = arr[i];
        }
    }

    for (const x86_u32u x :
         {0x430d08, 0x430d0c, 0x430d10, 0x430d94, 0x430498}) {
        X86_MEM32(x) = 0;
    }

    // reset player obj params ID
    X86_MEM8(0x430d14) = 0;

    if (X86_MEM32(0x430d94) == 0) {
        X86_MEM32(0x506c8c) = 0;
    }

    // new chapter state
    X86_MEM32(0x510f58) = 1;

    // go to next level variable
    X86_MEM32(0x50e78c) = 1;
    X86_MEM32(0x51251c) = 1;
}

void game::Continue(std::uint8_t* base) { X86_MEM32(0x51251c) = 1; }