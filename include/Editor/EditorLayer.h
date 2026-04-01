#pragma once
#include "../Application.h"
#include "NodeEditorUI.h"

namespace VisualEngine {

class EditorLayer : public Application {
private:
    NodeEditorUI nodeEditor;

public:
    void Init() override;
    void Update() override;
    void Shutdown() override;
};

}