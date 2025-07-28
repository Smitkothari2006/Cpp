#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Default constructor
    Student() {
        id = 0;
        cout << "Default constructor called. ID: " << id << endl;
    }

    // Parameterized constructor
    Student(int i) {
        id = i;
        cout << "Parameterized constructor called. ID: " << id << endl;
    }
};

int main() {
    Student s1;       // Default
    Student s2(102);  // Parameterized
    return 0;
}
