#pragma once
#include "../Node.h"

namespace VisualEngine {

class AddNode : public Node {
private:
    int a, b;

public:
    AddNode(int a, int b) : a(a), b(b) {}

    void Execute() override {
        int result = a + b;

        for (auto node : outputs)
            node->Execute();
    }
};

}