#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine created." << endl;
    }
};

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle created." << endl;
    }
};

class Car : virtual public Vehicle {
public:
    Car() {
        cout << "Car created." << endl;
    }
};

class Bike : virtual public Vehicle {
public:
    Bike() {
        cout << "Bike created." << endl;
    }
};

class Motorcycle : public Car, public Bike {
public:
    Motorcycle() {
        cout << "Motorcycle created." << endl;
    }
};

int main() {
    Motorcycle m;
    return 0;
}
