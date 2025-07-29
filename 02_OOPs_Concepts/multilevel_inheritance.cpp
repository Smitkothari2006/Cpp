/* 📘 Problem Statement:
Create class Person with method display().
Derive Employee from Person, and Manager from Employee.	*/
#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "Person details" << endl;
    }
};

class Employee : public Person
{
    // Inherits display()
};

class Manager : public Employee
{
    // Inherits display() through Employee
};

int main()
{
    Manager m;
    m.display(); // Output: Person details
    return 0;
}
