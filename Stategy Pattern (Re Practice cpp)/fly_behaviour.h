#include <iostream>
using namespace std;

class FlyBehavior {
public:
    virtual void fly() = 0; //pure virtual function
    virtual ~FlyBehavior() {} // destructor
};

class FlyWithWings : public FlyBehavior { //public inheritence, default inheritence of java
public:
    void fly() override { //should be used to throw warning if not overriding
        cout << "I'm flying with wings!" << endl;
    }
};

class FlyNoWay : public FlyBehavior {
public:
    void fly() override {
        cout << "I can't fly." << endl;
    }
};