/*
    Program: Function Overloading in C++
    Description:
    This program demonstrates the concept of function overloading,
    where multiple functions can have the same name but different parameters.
    Author: Smit Kothari

    -----------------------------
    📘 Notes on Function Overloading:
    -----------------------------
    - Function overloading allows multiple functions to share the same name,
      provided their parameter lists (number or types of parameters) differ.
    - The compiler determines which function to call based on the arguments used.
    - Overloading improves code readability by using the same function name for related operations.
    - Syntax example:
        void func(int a);
        void func(double a);
        void func(int a, int b);
    - Overloading is resolved at compile time (compile-time polymorphism).
    - Rules:
      * Functions must differ in parameter types or number of parameters.
      * Return type alone is not sufficient for overloading.
*/

#include <iostream>
using namespace std;

// Function to add two integers
int addition(int a, int b)
{
    return a + b;
}

// Overloaded function to add two floats
float addition(float a, float b)
{
    return a + b;
}

// Overloaded function to add three integers
int addition(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    // Separate variables for int and float inputs
    int int1, int2, int3;
    float float1, float2;

    // Input integers for the int addition versions
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;

    // Input floats for the float addition version
    cout << "Enter two floats: ";
    cin >> float1 >> float2;

    cout << "Addition of two integers (" << int1 << " + " << int2 << "): " << addition(int1, int2) << endl;
    cout << "Addition of two floats (" << float1 << " + " << float2 << "): " << addition(float1, float2) << endl;
    cout << "Addition of three integers (" << int1 << " + " << int2 << " + " << int3 << "): " << addition(int1, int2, int3) << endl;

    return 0; // Successful program termination
}