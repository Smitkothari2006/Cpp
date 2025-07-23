#include <iostream>
using namespace std;

int main() {
    int x = 10;         // A normal integer variable
    int* ptr = &x;      // A pointer variable that stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Value of ptr (address stored): " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // Modifying x using the pointer
    *ptr = 20;
    cout << "New value of x after *ptr = 20: " << x << endl;

    return 0;
}