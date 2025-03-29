#include "ducks/mallard_duck.h"
#include "ducks/rubber_duck.h"
using namespace std;

int main() {
    MallardDuck mallard;
    RubberDuck rubber;

    cout << "Mallard Duck Behavior:" << endl;
    mallard.display();
    mallard.performQuack();
    mallard.performFly();
    mallard.swim();

    cout << "\nRubber Duck Behavior:" << endl;
    rubber.display();
    rubber.performQuack();
    rubber.performFly();
    rubber.swim();

    // Changing behavior dynamically
    cout << "\nChanging Rubber Duck behavior..." << endl;
    rubber.setFlyBehavior(make_unique<FlyWithWings>());
    rubber.performFly();
    
    return 0;
}