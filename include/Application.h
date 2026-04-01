#pragma once

namespace VisualEngine {

class Application {
private:
    bool running = true;

public:
    virtual ~Application() = default;

    virtual void Init() {}
    virtual void Update() {}
    virtual void Shutdown() {}

    void Close() { running = false; }
    bool IsRunning() const { return running; }
};

}