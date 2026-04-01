#pragma once
#include <vector>
#include <string>

namespace VisualEngine {

class Node {
protected:
    std::vector<Node*> outputs;

public:
    virtual ~Node() = default;

    void Connect(Node* node) {
        outputs.push_back(node);
    }

    virtual void Execute() = 0;
};

}