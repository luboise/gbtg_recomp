#include "debug.h"

#include <sstream>
#include <vector>

#include "app/app.h"
#include "core/input.h"
#include "game/ghoulies.h"
#include "imgui.h"
#include "kernel/memory.h"

static bool debugWindowActive{false};

void PrimeNextWindow(ImVec2 pos) {
    ImGui::SetNextWindowPos(pos, ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSizeConstraints(
        ImVec2(600.0f, 20 * ImGui::GetTextLineHeightWithSpacing()),
        ImVec2(600.0f, FLT_MAX));
}

debug::UiData GetFiles() {
    debug::UiData data{};

    app::GameFiles files{};
    FindGame(files);

    auto assetsDir = files.dir / "bundles" / "aid_script";

    for (const auto& entry : std::filesystem::directory_iterator(assetsDir)) {
        auto path{entry.path()};
        auto filename{path.stem().string()};
        data.bundles.push_back(filename);
    }

    return data;
}

void SelectScene(const auto& bundles) {
    PrimeNextWindow(ImVec2{600.0, 0});

    ImGui::Begin("Force Load Scene");

    if (ImGui::BeginChild("Select Scene")) {
        for (const auto& bundlePath : bundles) {
            if (ImGui::Selectable(bundlePath.data(), false)) {
                game::SetNextPlaycam("aid_script_" + bundlePath);
            }
        }

        ImGui::EndChild();
    }
    ImGui::End();
}

void debug::DrawDebugWindow() {
    if (ImGui::IsKeyPressed(ImGuiKey_F11, false)) {
        ToggleDebugMenu();
    }

    if (!debugWindowActive) return;

    PrimeNextWindow(ImVec2{0, 0});

    ImGui::Begin("Debug Window");

    static auto uiData{GetFiles()};

    SelectScene(uiData.bundles);

    if (ImGui::Button("Advance Script")) {
        game::Continue(mem::Base());
    }

    auto* sceneTree{game::SceneTree()};

    while (sceneTree != nullptr) {
        auto* av{sceneTree->data()};

        std::stringstream ss{};
        ss << av->tag;

        ImGui::Text("%s at 0x%p (%f, %f, %f)", ss.str().c_str(), av,  //
                    av->pos.x, av->pos.y, av->pos.z);

        sceneTree = sceneTree->next();
    }

    ImGui::End();
}

void debug::UpdatePad(int port, input::Pad& pad) {
    if (debugWindowActive) {
        pad = input::Pad{
            .connected = pad.connected,
        };
    }
}

void debug::ToggleDebugMenu() { debugWindowActive = !debugWindowActive; }
