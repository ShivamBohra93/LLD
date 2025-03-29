#include "fly_behaviour.h"

class FlyNoWay : public FlyBehavior {
public:
    void fly() override {
        cout << "I can't fly." << endl;
    }
};