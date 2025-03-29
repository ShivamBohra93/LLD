#pragma once
#include "quack_behaviour.h"

class Quack : public QuackBehavior {
public:
    void quack() override {
        cout << "Quack!" << endl;
    }
};