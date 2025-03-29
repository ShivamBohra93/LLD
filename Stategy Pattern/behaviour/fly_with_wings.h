#pragma once
#include "fly_behaviour.h"

class FlyWithWings : public FlyBehavior { //public inheritence, default inheritence of java
public:
    void fly() override { //should be used to throw warning if not overriding
        cout << "I'm flying with wings!" << endl;
    }
};