// File: union_example.cpp
#include <iostream>
using namespace std;

// Union allows storing different data types in the same memory location
union Data {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    Data d;

    d.intVal = 10;
    cout << "Union holding intVal: " << d.intVal << endl;

    d.floatVal = 3.14f;
    cout << "Union now holding floatVal: " << d.floatVal << endl;

    d.charVal = 'A';
    cout << "Union now holding charVal: " << d.charVal << endl;

    // ⚠️ Only the last assigned value is valid in union
    cout << "Accessing intVal after assigning charVal (invalid): " << d.intVal << endl;

    return 0;
}
