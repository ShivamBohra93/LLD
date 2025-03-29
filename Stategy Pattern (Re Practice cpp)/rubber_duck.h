#pragma once
#include "duck.h"

class RubberDuck : public Duck {
public:
    RubberDuck() {
        flyBehavior = make_unique<FlyNoWay>(); 
        quackBehavior = make_unique<Quack>();
    }
    void display() override { //override is imp
        cout << "I'm a Rubber Duck." << endl;
    }
};