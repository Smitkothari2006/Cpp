#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Parameterized constructor
    Student(int i) {
        id = i;
    }

    // Copy constructor
    Student(const Student &s) {
        id = s.id;
        cout << "Copy constructor called. Copied ID is " << id << endl;
    }

    void display() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;  // Copy constructor invoked
    s2.display();
    return 0;
}
