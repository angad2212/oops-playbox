/*
Problem:Create a `Vehicle` base class and derived classes `Car`, `Bike`, and `Truck`.

Each derived class should override a `displayInfo()` function and add its own attributes.

Concepts Tested: Inheritance, overriding, base constructor call
*/

#include <iostream>

using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout << "Hey there, i am a vehicle" << endl;
    }
    void displayInfo(){
        cout << "Vehicle" << endl;
    };
};

class Car : public Vehicle{
    public:
    Car(){
        cout << "Hey there, i am a car" << endl;
    }
    void displayInfo(){
        cout << "Car" << endl;
    }
};

class Bike : public Vehicle{
    public:
    void displayInfo(){
        cout << "Bike" << endl;
    }
};

class Truck : public Vehicle{
    public:
    void displayinfo(){
        cout << "Truck" << endl;
    }
};

int main(){
    Car car;
    Bike bike;
    Truck truck;
    car.displayInfo();
    bike.displayInfo();
    truck.displayInfo();
    return 0;
}