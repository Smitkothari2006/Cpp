/* 📘 Problem Statement:
Create a class Animal with a method eat().
Derive a class Dog from Animal and call the eat() method from Dog.	*/
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal
{
    // Inherits eat()
};

int main()
{
    Dog d;
    d.eat(); // Output: Animal eats food
    return 0;
}
