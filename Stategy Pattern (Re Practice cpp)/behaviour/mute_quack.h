#pragma once
#include "quack_behaviour.h"

class MuteQuack : public QuackBehavior {
public:
    void quack() override {
        cout << "<< Silence >>" << endl;
    }
};