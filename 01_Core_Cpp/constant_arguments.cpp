/*
    Program: Function with Constant Arguments in C++
    Description:
    This program demonstrates the use of constant arguments in functions.
    Author: Smit Kothari

    ------------------------------
    📘 Notes on Constant Arguments:
    ------------------------------
    - In C++, constant arguments are parameters declared with the `const` keyword.
    - `const` parameters cannot be modified inside the function.
    - This ensures the function does not accidentally change the input values.
    - Using `const` helps improve code safety and clarity.
    - Syntax:
        void func(const int a);
    - If the parameter is a reference or pointer, const ensures the referred object is not modified.
    - Example:
        void printValue(const int &value) { // cannot modify value here }
    - Useful when passing large objects by reference to prevent modification while avoiding copying.
*/

#include <iostream>
using namespace std;

// Function that takes constant float arguments and prints their sum
void addition(const float num1, const float num2)
{
    // We can use num1 and num2 but cannot modify them because they are const
    cout << "Addition of " << num1 << " & " << num2 << " is " << (num1 + num2) << endl;
}

int main() 
{
    float a = 7.5f, b = 2.5f;

    // Calling the function with constant arguments
    addition(a, b);

    return 0; // Successful program termination
}
