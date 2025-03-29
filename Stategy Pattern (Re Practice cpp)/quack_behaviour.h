#pragma once
#include <iostream>
using namespace std;

class QuackBehavior {
public:
    virtual void quack() = 0;
    virtual ~QuackBehavior() {}
};

class Quack : public QuackBehavior {
public:
    void quack() override {
        cout << "Quack!" << endl;
    }
};

class MuteQuack : public QuackBehavior {
public:
    void quack() override {
        cout << "<< Silence >>" << endl;
    }
};