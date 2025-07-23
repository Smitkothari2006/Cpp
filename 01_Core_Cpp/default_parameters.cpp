/*
    Program: Function with Default Arguments in C++
    Description:
    This program demonstrates the use of default arguments in functions.
    Author: Smit Kothari

    --------------------------
    📘 Notes on Default Parameters:
    --------------------------
    - In C++, a **default parameter** is a value provided in a function declaration 
      that is automatically used if the caller doesn't supply that argument.
    - Default parameters help in reducing the number of function overloads.
    - Only the **trailing (rightmost)** parameters can be defaulted.
    - Once a default value is provided for a parameter, all parameters to its **right** 
      must also have default values (if any).
    - Syntax:
        void func(int a, int b = 10);  // b has a default value
    - Calling func(5) → means func(5, 10)
    - Calling func(5, 20) → means func(5, 20)
*/

#include <iostream>
using namespace std;

// Function definition with a default value for the second parameter
void addition(float num1, float num2 = 5)
{
    // Displaying the result of the addition
    cout << "Addition of " << num1 << " & " << num2 << " is " << (num1 + num2) << endl;
}

int main() 
{
    // Call with one argument; num2 takes the default value 5
    addition(5);

    // Call with both arguments provided; overrides the default value
    addition(5, 4);

    return 0; // Indicate successful program termination
}
