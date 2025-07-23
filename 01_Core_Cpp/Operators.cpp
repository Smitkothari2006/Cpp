/*
    C++ Example: Demonstrating All Major Operator Types
    Includes:
    - Arithmetic
    - Assignment
    - Comparison
    - Bitwise
    - Logical
    - Type ID
    - Member Access
    - Subscript
    - Function Call
    - Scope Resolution
    - new / delete
    - throw
*/

#include <iostream>
#include <typeinfo>   // for typeid
using namespace std;

float a, b;

// Function for function call operator
int add(int x, int y) {
    return x + y;
}

// Class to demonstrate member access and -> operator
class Demo {
public:
    int value;
    void show() {
        cout << "Value = " << value << endl;
    }
};

// Class with static member to demonstrate scope resolution
class Test {
public:
    static int staticVar;
};
int Test::staticVar = 100;

int main() {
    cout << "Enter Number 1: ";
    cin >> a;
    cout << "Enter Number 2: ";
    cin >> b;

    // Arithmetic Operators
    cout << "\n=== Arithmetic Operators ===" << endl;
    cout << "Addition of " << a << " & " << b << " is " << (a + b) << endl;
    cout << "Subtraction of " << a << " & " << b << " is " << (a - b) << endl;
    cout << "Multiplication of " << a << " & " << b << " is " << (a * b) << endl;
    cout << "Division of " << a << " & " << b << " is " << (a / b) << endl;

    // Assignment Operator
    cout << "\n=== Assignment Operator ===" << endl;
    cout << "Before Assignment -> a: " << a << ", b: " << b << endl;
    a = b; // Assignment
    cout << "After a = b -> a: " << a << ", b: " << b << endl;

    // Comparison Operators
    cout << "\n=== Comparison Operators ===" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: "  << (a > b)  << endl;
    cout << "a < b: "  << (a < b)  << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Bitwise Operators (using int)
    int x = 6, y = 3;
    cout << "\n=== Bitwise Operators ===" << endl;
    cout << "x & y: "  << (x & y)  << endl;
    cout << "x | y: "  << (x | y)  << endl;
    cout << "x ^ y: "  << (x ^ y)  << endl;
    cout << "~x: "     << (~x)    << endl;
    cout << "x << 1: " << (x << 1) << endl;
    cout << "y >> 1: " << (y >> 1) << endl;

    // Logical Operators
    bool p = true, q = false;
    cout << "\n=== Logical Operators ===" << endl;
    cout << "p && q: " << (p && q) << endl;
    cout << "p || q: " << (p || q) << endl;
    cout << "!p: "     << (!p)     << endl;

    // Other Operators
    cout << "\n=== Other Operators ===" << endl;

    // typeid Operator
    cout << "Type of variable a: " << typeid(a).name() << endl;
    cout << "Type of variable x: " << typeid(x).name() << endl;

    // Member Access Operator (.) and Arrow Operator (->)
    Demo d;
    d.value = 50;
    cout << "\nUsing Member Access (.) Operator:" << endl;
    d.show();

    Demo* ptr = new Demo();  // new operator
    ptr->value = 75;
    cout << "Using Arrow (->) Operator on pointer:" << endl;
    ptr->show();
    delete ptr;  // delete operator

    // Subscript Operator []
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "\nUsing Subscript Operator []:" << endl;
    cout << "arr[2] = " << arr[2] << endl;

    // Function Call Operator ()
    cout << "\nUsing Function Call Operator ():" << endl;
    cout << "add(5, 7) = " << add(5, 7) << endl;

    // Scope Resolution Operator ::
    cout << "\nUsing Scope Resolution Operator :: to access static member:" << endl;
    cout << "Test::staticVar = " << Test::staticVar << endl;

    // throw Operator (basic usage)
    cout << "\nUsing throw Operator:" << endl;
    try {
        if (b == 0)
            throw "Division by zero not allowed.";
        else
            cout << "a / b = " << (a / b) << endl;
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
