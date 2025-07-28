
#include <iostream>
using namespace std;

// Define Teacher class first
class Student;  // Forward declaration

class Teacher {
public:
    void printMarks(Student s);  // Member function declaration
};

class Student {
private:
    int marks;

public:
    Student() {
        marks = 85;
    }

    // Now this works, because Teacher is fully declared
    friend void Teacher::printMarks(Student s);
};

// Define the member function
void Teacher::printMarks(Student s) {
    cout << "Student's marks are: " << s.marks << endl;
}

int main() {
    Student stu;
    Teacher teach;

    teach.printMarks(stu);  // Output: Student's marks are: 85

    return 0;
}
