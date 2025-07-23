/*
    File: call_by_value.cpp
    Program: Demonstrates Call by Value in C++
    Description:
    This program attempts to swap two numbers using a function that takes arguments by value.

    ---------------------------------
    📘 Notes on Call by Value in C++
    ---------------------------------

    ✅ 1. What is Call by Value?
    - In call by value, a **copy** of the actual variable is passed to the function.
    - Changes made inside the function do **not affect** the original variables in `main()`.

    ✅ 2. Syntax:
        void functionName(type a, type b); // No '&' symbol means values are copied.

    ✅ 3. Limitations:
    - Since only copies are modified, the original data remains unchanged.
    - Ideal when you do **not** want the function to alter the caller’s data.

    ✅ 4. Type Safety:
    - Be cautious of mismatched types.
    - In this program, the function takes `int`, but we are passing `float` → this causes implicit type conversion and potential data loss.

    🔁 Recommended Fix:
    - Either change the `swap()` function to accept `float` instead of `int`, or declare `x` and `y` as `int` for type consistency.
*/

#include <iostream>
using namespace std;

// Swap function using call by value (ineffective for changing originals)
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Only a and b inside this function are swapped — not the originals.
}

int main() {
    int x, y;

    // Taking input from the user
    cout << "Enter Number 1: ";
    cin >> x;
    cout << "Enter Number 2: ";
    cin >> y;

    // Displaying original values before swap
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // ⚠️ Implicit conversion: float to int (may lose decimal values)
    swap(x, y);  // No effect on x and y in main()

    // Displaying values after swap attempt
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
