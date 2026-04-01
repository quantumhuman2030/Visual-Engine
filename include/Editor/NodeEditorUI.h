#pragma once
#include <vector>
#include "../Node.h"

namespace VisualEngine {

struct Link {
    int id;
    int start_attr;
    int end_attr;
};

class NodeEditorUI {
private:
    int current_id = 1;

public:
    std::vector<Node*> nodes;
    std::vector<Link> links;

    void Draw();
    int GetNextId() { return current_id++; }
};

}