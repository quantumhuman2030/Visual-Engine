#pragma once
#include <string>

namespace VisualEngine {

class Entity {
private:
    std::string name;

public:
    Entity(const std::string& name) : name(name) {}

    const std::string& GetName() const { return name; }
};

}