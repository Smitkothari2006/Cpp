/*
    Program: Demonstration of Inline Functions in C++
    Description:
    This program demonstrates the use of inline functions, which suggest to the compiler
    to insert the function’s code directly at the point of each call to reduce function call overhead.
    Author: Smit Kothari

    ---------------------------
    📘 Notes on Inline Functions:
    ---------------------------
    - Inline functions are defined with the keyword `inline` before the function definition.
    - They help improve performance by avoiding the overhead of a function call.
    - Best suited for small, frequently called functions.
    - The compiler may ignore the `inline` suggestion if the function is too complex.
    - Syntax:
        inline returnType functionName(parameters) { //function body }
    - Example:
        inline int square(int x) { return x * x; }
    - Usage:
        int result = square(5); // Calls the inline function

    ⚠️ Note:
    - Overusing inline functions can increase binary size.
    - Inline functions must be defined in header files or before use if in the same file.
*/

#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int x)
{
    return x * x;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Calling the inline function to calculate square
    cout << "Square of " << num << " is " << square(num) << endl;

    return 0; // Successful program termination
}
