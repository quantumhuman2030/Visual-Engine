#pragma once
#include <vector>
#include "Node.h"

namespace VisualEngine {

class Graph {
private:
    std::vector<Node*> nodes;

public:
    void AddNode(Node* node) {
        nodes.push_back(node);
    }

    void Execute() {
        for (auto node : nodes) {
            node->Execute();
        }
    }
};

}