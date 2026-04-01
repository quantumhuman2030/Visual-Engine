#include "NodeEditorUI.h"
#ifndef IMNODES_H
#include <imnodes.h>
#include <imgui.h>

namespace ImGui {
    inline void Text(const char*, ...) {}
    inline void Indent(float) {}
}

namespace imnodes {
    inline void BeginNodeEditor() {}
    inline void EndNodeEditor() {}
    inline void BeginNode(int) {}
    inline void EndNode() {}
    inline void BeginNodeTitleBar() {}
    inline void EndNodeTitleBar() {}
    inline void BeginInputAttribute(int) {}
    inline void EndInputAttribute() {}
    inline void BeginOutputAttribute(int) {}
    inline void EndOutputAttribute() {}
    inline void Link(int, int, int) {}
    inline bool IsLinkCreated(int*, int*) { return false; }
}
#endif

namespace VisualEngine {

void NodeEditorUI::Draw() {
    imnodes::BeginNodeEditor();

    for (int i = 0; i < nodes.size(); i++) {
        imnodes::BeginNode(i);

        imnodes::BeginNodeTitleBar();
        ImGui::Text("Node %d", i);
        imnodes::EndNodeTitleBar();

        imnodes::BeginInputAttribute(i * 2);
        ImGui::Text("In");
        imnodes::EndInputAttribute();

        imnodes::BeginOutputAttribute(i * 2 + 1);
        ImGui::Indent(40);
        ImGui::Text("Out");
        imnodes::EndOutputAttribute();

        imnodes::EndNode();
    }

    for (auto& link : links) {
        imnodes::Link(link.id, link.start_attr, link.end_attr);
    }

    // Handle new links
    int start_attr, end_attr;
    if (imnodes::IsLinkCreated(&start_attr, &end_attr)) {
        links.push_back({ GetNextId(), start_attr, end_attr });
    }

    imnodes::EndNodeEditor();
}

}