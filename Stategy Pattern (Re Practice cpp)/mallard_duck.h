#pragma once
#include "duck.h"

class MallardDuck : public Duck {
public:
    MallardDuck() {
        flyBehavior = make_unique<FlyWithWings>(); 
        //since flyBehaviour is protected in parent
        //it can be used here still being protected
        quackBehavior = make_unique<Quack>();
    }
    void display() override { //override is imp
        cout << "I'm a Mallard Duck." << endl;
    }
};