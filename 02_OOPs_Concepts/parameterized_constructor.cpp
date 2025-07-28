#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Parameterized constructor
    Student(int i) {
        id = i;
        cout << "Parameterized constructor called.\nID is " << id << endl;
    }
};

int main() {
    Student s1(101);
    return 0;
}
