/*
    File: call_by_reference.cpp
    Program: Demonstrates Call by Reference in C++
    Description:
    This program swaps the values of two numbers using a function that takes parameters by reference.

    ------------------------------------
    📘 Notes on Call by Reference in C++
    ------------------------------------

    ✅ 1. What is Call by Reference?
    - In call by reference, the function receives **aliases (references)** to the actual variables.
    - Any changes made to the parameters affect the original arguments.

    ✅ 2. Syntax:
        void swap(int &a, int &b);  // '&' denotes pass by reference

    ✅ 3. Why Use It?
    - Efficient: No need to copy values (saves memory and time).
    - Allows functions to modify the caller's variables directly.

    ✅ 4. Example Use Cases:
    - Swapping values
    - Returning multiple results from a function
    - Efficient large data manipulation

    ⚠️ Note:
    - Reference types must match. If the function expects `int&`, do not pass `float`.
      You must ensure type compatibility or use the correct data types.
*/

#include <iostream>
using namespace std;

// Function to swap two integers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    // Display values before swap
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;


    // Call the swap function
    swap(num1, num2);

    // Display values after swap
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
