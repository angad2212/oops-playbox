/*
Problem: Implement a base class `Shape` with a method `area()`.

Derive `Circle`, `Rectangle`, and `Triangle` classes and override `area()` accordingly.
Demonstrate runtime polymorphism using base class pointers.
Also, overload the `+` operator to combine two `Shape` objects (compile-time polymorphism).

Concepts Tested: Function overriding, operator overloading, virtual functions
*/
#include <iostream>


using namespace std;

class Shape {
protected:
    double totalArea;

public:
    //Constructor takes one parameter a, default is 0
    Shape(double a = 0) : totalArea(a) {} //Initializes the member variable totalArea with the value of a

    virtual double area() const {
        return totalArea;
    }
    //virtual -> this function might be redefined differently in my child classes — 
    //and when that happens, always call the child version at runtime

    Shape operator+(const Shape &other) {
        Shape combined;
        combined.totalArea = this->area() + other.area();
        return combined;
    }

    virtual ~Shape() {} //destructor
};    

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {} //modern way of initializing the member variables

    double area() const override { //writing override here is not necessary, but it's a good practice
        return M_PI * radius * radius; 
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Triangle : public Shape{
    double base, height;
public: 
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *s1 = new Circle(5);
    Shape *s2 = new Rectangle(4, 6);
    Shape *s3 = new Triangle(3, 7);

    cout << "Circle Area: " << s1->area() << endl;
    cout << "Rectangle Area: " << s2->area() << endl;
    cout << "Triangle Area: " << s3->area() << endl;

    // Compile-time polymorphism — operator overloading
    Circle c1(3), c2(4);
    Shape combined = c1 + c2;
    cout << "Combined Area (Circle + Circle): " << combined.area() << endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
