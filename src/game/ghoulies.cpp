#include "ghoulies.h"

#include "core/log.h"

void game::SelectScene(std::string_view str) {
    LOGR("setting scene to %s", str.data());
}