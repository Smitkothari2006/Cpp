// File: structure_example.cpp
#include <iostream>
using namespace std;

// Define a structure to represent a student
struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    // Create a student object
    Student s1;

    // Input student details
    cout << "Enter Roll Number: ";
    cin >> s1.rollNo;

    cout << "Enter Name: ";
    cin.ignore();           // To clear newline from buffer
    getline(cin, s1.name);  // To allow space in name

    cout << "Enter Marks: ";
    cin >> s1.marks;

    // Display student details
    cout << "\n=== Student Details ===" << endl;
    cout << "Roll Number: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
