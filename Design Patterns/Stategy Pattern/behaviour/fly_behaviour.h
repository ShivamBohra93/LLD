#pragma once
#include <iostream>
using namespace std;

class FlyBehavior {
public:
    virtual void fly() = 0; //pure virtual function
    virtual ~FlyBehavior() {} // destructor
};
