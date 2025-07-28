
#include <iostream>
using namespace std;
class Teacher;  // Forward declaration

class Students
{
private:
    int marks;
    public:
    Students():marks(90){}
    friend class Teacher;
};

class Teacher
{
public:
   void printmarks(Students s);
};

void Teacher::printmarks(Students s) {
    cout << "Student's marks are: " << s.marks << endl;
}

int main() 
{
    Students stu;
    Teacher teach;
    teach.printmarks(stu);

    return 0;
}