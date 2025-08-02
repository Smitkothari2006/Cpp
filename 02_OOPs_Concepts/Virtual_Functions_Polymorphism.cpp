/* 📘 Problem Statement:
Create a base class `Shape` with a virtual method `area()` that returns the area as a double.
Derive classes `Rectangle` and `Circle` from `Shape`, overriding the `area()` method.
Use pointers to base class `Shape` to refer to objects of derived classes.
Demonstrate runtime polymorphism by calling the overridden `area()` methods through base class pointers.
*/

#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function for polymorphic behavior
    virtual void area() {}
};

// Derived class Circle
class Circle : public Shape
{
protected:
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius; // using 'this' pointer
    }

    // Override area() for Circle
    void area() override
    {
        cout << "Area of the shape Circle is " << (3.14 * radius * radius) << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
protected:
    double length;
    double width;

public:
    Rectangle(float length, float width)
    {
        this->length = length; // using 'this' pointer
        this->width = width;
    }

    // Override area() for Rectangle
    void area() override
    {
        cout << "Area of the shape Rectangle is " << (length * width) << endl;
    }
};

int main()
{
    // Base class pointer
    Shape *shape_ptr;

    // Create Rectangle and Circle objects
    Rectangle r1(10, 20);
    Circle c1(100);

    // Use base class pointer to call derived class methods
    shape_ptr = &r1;
    shape_ptr->area(); // Calls Rectangle's area()

    shape_ptr = &c1;
    shape_ptr->area(); // Calls Circle's area()

    return 0;
}
