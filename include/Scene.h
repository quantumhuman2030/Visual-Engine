#pragma once
#include <vector>
#include "Entity.h"

namespace VisualEngine {

class Scene {
private:
    std::vector<Entity> entities;

public:
    void AddEntity(const Entity& entity) {
        entities.push_back(entity);
    }

    void Update() {
        // Update entities later
    }
};

}