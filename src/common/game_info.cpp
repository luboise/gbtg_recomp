#include <vector>

#include "app/app.h"
#include "game/ghoulies.h"
#include "imgui.h"

void ui(auto ui);

// what the runtime asks of the game; strings must be set, hooks may stay null
const app::GameInfo app::kGame = {
    .title = L"Game Title",       // window and splash
    .short_title = L"Game",       // message boxes
    .name = L"Game",              // window classes, crash dumps, handover event
    .log = "game",                // log file prefix
    .settings = "settings.toml",  // settings file beside the exe
    .splash = L"splash",  // optional splash.png or splash.bmp beside the exe
    .missing =
        L"Put the game in the assets folder: its disc image (.iso), or "
        L"default.xbe with its folders beside it.",
    .images = {{"default.xbe", "Game"}},  // each recompiled xbe and its exe,
                                          // for title launches
    .options = {},       // game settings kept in the settings file
    .load = nullptr,     // reads more from the settings file's toml::table
    .save = nullptr,     // writes more into it
    .init = nullptr,     // after the settings load, before the window and boot
    .loaded = nullptr,   // image in memory, before its entry point runs
    .window = nullptr,   // the game window is up
    .message = nullptr,  // window messages first; true takes one
    .ui = ui,            // ImGui drawing each frame
    .pad = nullptr,      // changes a polled pad
    .rumble = nullptr,   // changes a rumble before it is set
};

struct UiData {
    std::vector<std::string> bundles;
};

namespace {
using namespace app;

UiData GetFiles() {
    UiData data{};

    GameFiles files{};
    FindGame(files);

    auto assetsDir = files.dir / "bundles" / "aid_script";

    for (const auto& entry : std::filesystem::directory_iterator(assetsDir)) {
        auto path{entry.path()};
        auto filename{path.filename().string()};
        data.bundles.push_back(filename);
    }

    return data;
}
}  // namespace

void ui(auto ui) {
    ImGui::Begin("Debug Window");

    static auto uiData{GetFiles()};

    if (ImGui::BeginListBox("Select Scene")) {
        for (const auto& bundlePath : uiData.bundles) {
            if (ImGui::Selectable(bundlePath.data(), false)) {
                game::SetNextPlaycam(bundlePath);
            }
        }

        ImGui::EndListBox();
    }

    ImGui::End();
}