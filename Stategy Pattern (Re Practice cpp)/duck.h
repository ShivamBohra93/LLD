#pragma once
#include "fly_behaviour.h"
#include "quack_behaviour.h"
#include <memory>
using namespace std;

class Duck {
protected:
    unique_ptr<FlyBehavior> flyBehavior; //allocates memory for that type of object
    unique_ptr<QuackBehavior> quackBehavior; //used for easily freeing memory when needed

public:
    virtual void display() = 0; //pure virtual function making class an abstract class
    
    void performFly() { 
        flyBehavior->fly(); 
    }
    
    void performQuack() { 
        quackBehavior->quack(); 
    }
    
    void swim() { 
        cout << "All ducks float, even decoys!" << endl; 
    }
    
    void setFlyBehavior(unique_ptr<FlyBehavior> fb) { //check later whether this is pass by value or ref
        flyBehavior = move(fb);//move is used to transfer ownership, so fb is of no use now 
    }
    
    void setQuackBehavior(unique_ptr<QuackBehavior> qb) { 
        quackBehavior = move(qb); 
    }
    
    virtual ~Duck() {}
};

// Does fb Become Useless After std::move(fb)?
// Yes, after std::move(fb), fb is no longer useful because:
// Ownership of the resource (heap-allocated object) is transferred to flyBehavior.
// fb becomes empty (nullptr), meaning it no longer points to the original object.