/* 📘 Problem Statement:
Create a base class `Animal` with a method `sound()`.
Derive classes `Dog` and `Cat` from `Animal`, overriding the `sound()` method.
Use a pointer of type `Animal*` to refer to objects of derived classes.
Demonstrate polymorphism by calling the `sound()` method through the base class pointer.
*/
#include <iostream>
using namespace std;

class Animal{
    public:
        void sound (){
            cout<<"Sound From Animal Class \n";
        }
};

class Dog: public Animal{
    public:
        void sound (){
            cout<<"Sound From Dog Class \n";
        }
};

class Cat: public Animal{
    public:
        void sound (){
            cout<<"Sound From Cat Class \n";
        }
};

int main(){ 
    
    Animal* animal_ptr;
    Cat c1;
    Dog d1;

    animal_ptr = &d1;
    animal_ptr->sound(); // Calls Dog's sound()

    animal_ptr = &c1;
    animal_ptr->sound(); // Calls Cat's sound()
    

    return 0;
}