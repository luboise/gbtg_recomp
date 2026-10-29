#include "ghoulies.h"

#include <optional>

namespace {
static std::optional<std::string> NextPlaycam = std::nullopt;
}

auto game::TakeNextPlaycam() -> std::optional<std::string> {
    if (NextPlaycam) {
        return std::exchange(NextPlaycam, std::nullopt);
    }

    return std::nullopt;
}
void game::SetNextPlaycam(std::string_view str) { NextPlaycam = str; }