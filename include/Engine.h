#pragma once
#include "Application.h"

namespace VisualEngine {
    class Engine {
    public:
        static void Run(Application* app) {
            app->Init();
            while (app->IsRunning()) {
                app->Update();
            }
            app->Shutdown();
        }
    };
}