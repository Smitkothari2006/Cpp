/*
    Program: Basic Calculator using Functions and Switch-Case in C++
    Description:
    This program allows the user to perform basic arithmetic operations:
    Addition, Subtraction, Multiplication, and Division using user-defined functions.

    ----------------------------
    📘 Notes on Concepts Used:
    ----------------------------

    ✅ 1. Functions:
    - A function is a block of code that performs a specific task.
    - Improves modularity, code reuse, and readability.
    - Syntax:
        returnType functionName(parameter1, parameter2, ...);
        Example:
            float add(float a, float b);

    ✅ 2. Function Prototypes:
    - A function prototype declares the function before its use in main().
    - Required when function definitions appear **after main()**.
    - In this program, function definitions are placed before main(),
      so prototypes are optional.
    - Syntax:
        returnType functionName(parameter1Type, parameter2Type);

    ✅ 3. Switch-Case:
    - A control statement used to execute one block of code among many.
    - Works with integer and character values (like `int choice` here).
    - Syntax:
        switch(expression) {
            case value1:
                // code
                break;
            case value2:
                // code
                break;
            default:
                // code for invalid input
        }

    ✅ 4. Division by Zero:
    - Division by zero causes runtime errors.
    - Always check if the denominator is zero before dividing.

    ✅ 5. Input & Output:
    - `cin` is used for input, and `cout` is used for output in C++.
*/

#include <iostream>
using namespace std;

// Function to perform addition
void addition(float num1, float num2)
{
    cout << "Addition of " << num1 << " & " << num2 << " is " << (num1 + num2) << endl;
}

// Function to perform subtraction
void subtraction(float num1, float num2)
{
    cout << "Subtraction of " << num1 << " & " << num2 << " is " << (num1 - num2) << endl;
}

// Function to perform multiplication
void multiplication(float num1, float num2)
{
    cout << "Multiplication of " << num1 << " & " << num2 << " is " << (num1 * num2) << endl;
}

// Function to perform division
void division(float num1, float num2)
{
    if (num2 == 0)
    {
        // Prevent division by zero
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else
    {
        cout << "Division of " << num1 << " & " << num2 << " is " << (num1 / num2) << endl;
    }
}

int main()
{
    int choice;       // To store user's menu selection
    float num1, num2; // Numbers to operate on

    // Input from the user
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    // Display operation menu
    cout << "\nSelect Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter Choice Number: ";
    cin >> choice;

    // Perform operation based on user's choice
    switch (choice)
    {
    case 1:
        addition(num1, num2);
        break;
    case 2:
        subtraction(num1, num2);
        break;
    case 3:
        multiplication(num1, num2);
        break;
    case 4:
        division(num1, num2);
        break;
    default:
        // Handles invalid input
        cout << "Invalid choice. Please select between 1 and 4." << endl;
        break;
    }

    return 0; // End of program
}