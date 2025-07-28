#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Default constructor
    Student() {
        id = 0;
        cout << "Default constructor called. ID set to " << id << endl;
    }
};

int main() {
    Student s1;
    return 0;
}
