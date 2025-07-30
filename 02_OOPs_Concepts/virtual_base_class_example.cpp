/* 📘 Problem Statement:
Create a class `Person` that has private data members: `name` and `age`.
Provide appropriate constructors, getters, and setters, and a method `display()` to print the details.

Create two classes:
- `Student` (inherits from `Person`), which adds `rollNumber`
- `Employee` (inherits from `Person`), which adds `employeeID`

Now, create a class `WorkingStudent` that inherits from both `Student` and `Employee`.

👉 Show how ambiguity arises when accessing members of `Person` in `WorkingStudent`, and resolve it using **virtual inheritance**.

Write a `main()` function to create a `WorkingStudent` object, set all details using setters, and display them using `display()`.


Inheritance :

Base               -->  derived
Person             -->  Student
Person             -->  Emplyoee
Student + Emplyoee -->  WorkingStudent
*/

#include <iostream>
using namespace std;

// Base class: Person
class Person
{
private:
    string name;
    int age;

public:
    // Setter for name and age
    void set_name_age(string naam, int ag)
    {
        name = naam;
        age = ag;
    }

    // Getter for name
    string getName()
    {
        return name;
    }

    // Getter for age
    int getAge()
    {
        return age;
    }

    // Display function for Person class
    void display()
    {
        cout << "\nName: " << name << "\n\nAge: " << age << endl;
    }
};

// Student class inherits Person virtually
class Student : virtual public Person
{
private:
    int roll_no;

public:
    // Setter for roll number
    void set_roll(int roll)
    {
        roll_no = roll;
    }

    // Getter for roll number
    int get_roll()
    {
        return roll_no;
    }

    // Display function specific to Student
    void displayStudent()
    {
        cout << "\nRoll Number: " << roll_no << endl;
    }
};

// Emplyoee class inherits Person virtually
class Emplyoee : virtual public Person
{
private:
    int emp_id;

public:
    // Setter for employee ID
    void set_id(int id)
    {
        emp_id = id;
    }

    // Getter for employee ID
    int get_id()
    {
        return emp_id;
    }

    // Display function specific to Employee
    void displayEmplyoee()
    {
        cout << "\nEmplyoee Id : " << emp_id << endl;
    }
};

// WorkingStudent inherits from both Emplyoee and Student
class WorkingStudent : public Emplyoee, public Student
{
public:
    // Combined display function that calls all base class display functions
    void displayAll()
    {
        // Calls Person::display() — unambiguous due to virtual inheritance
        display();

        // Calls Emplyoee and Student display methods
        displayEmplyoee();
        displayStudent();
    }
};

int main()
{
    string naam;
    int ag, id, roll;

    // Input from user
    cout << "Enter the Name of the Person: ";
    cin >> naam;

    cout << "Enter the Age of the Person: ";
    cin >> ag;

    cout << "Enter the Emplyoee ID: ";
    cin >> id;

    cout << "Enter the Roll No: ";
    cin >> roll;

    // Create object of WorkingStudent
    WorkingStudent workStudent;

    // Set values using setters
    workStudent.set_name_age(naam, ag);
    workStudent.set_id(id);
    workStudent.set_roll(roll);

    // Display all details
    workStudent.displayAll();

    return 0;
}