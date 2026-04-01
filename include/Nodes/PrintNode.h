#pragma once
#include "../Node.h"
#include <iostream>

namespace VisualEngine {

class PrintNode : public Node {
private:
    std::string message;

public:
    PrintNode(const std::string& msg) : message(msg) {}

    void Execute() override {
        std::cout << message << std::endl;

        for (auto node : outputs)
            node->Execute();
    }
};

}