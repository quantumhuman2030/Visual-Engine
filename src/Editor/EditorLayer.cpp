#include "EditorLayer.h"
#include <imgui.h>

namespace VisualEngine {

void EditorLayer::Init() {
    // Add some demo nodes
    nodeEditor.nodes.push_back(nullptr);
    nodeEditor.nodes.push_back(nullptr);
}

void EditorLayer::Update() {
    ImGui::NewFrame();

    // Dockspace
    ImGui::DockSpaceOverViewport();

    // Toolbar
    if (ImGui::Begin("Toolbar")) {
        if (ImGui::Button("Run")) {
            // TODO: execute graph
        }
    }
    ImGui::End();

    // Node editor window
    if (ImGui::Begin("Visual Script")) {
        nodeEditor.Draw();
    }
    ImGui::End();

    ImGui::Render();
}

void EditorLayer::Shutdown() {}

}