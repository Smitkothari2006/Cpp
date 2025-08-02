#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function

    // Normal function
    void description() {
        cout << "This is a shape." << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* shape;         // Allowed: base class pointer

    Circle c;
    shape = &c;

    shape->description(); // Calls normal base class function
    shape->draw();        // Calls overridden draw() in Circle

    // Shape s;           // ❌ Error: cannot instantiate abstract class

    return 0;
}
