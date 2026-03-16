#include <iostream>

class BloodstrikeExternal {
public:
    void initialize() {
        std::cout << "Bloodstrike External Initialized" << std::endl;
    }
};

int main() {
    BloodstrikeExternal app;
    app.initialize();
    return 0;
}