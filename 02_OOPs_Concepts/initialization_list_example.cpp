#include <iostream>
#include <string>
using namespace std;

// 👇 Class to demonstrate member without default constructor
class Member {
    int x;
public:
    Member(int val) : x(val) {
        cout << "Member initialized with x = " << x << endl;
    }
};

// 👇 Base class with parameterized constructor
class Base {
public:
    Base(int val) {
        cout << "Base class initialized with val = " << val << endl;
    }
};

class AllInOne : public Base {
    const int constVal;   // Must be initialized using initialization list
    int& refVal;          // Reference must be initialized
    Member m;             // Member object without default constructor
    string name;
    int age;

public:
    // 👇 Constructor using an initialization list for all members
    AllInOne(int constValArg, int& refArg, int memberVal, string nameArg, int ageArg)
        : Base(memberVal),        // Base class initialized
          constVal(constValArg),  // const member initialized
          refVal(refArg),         // reference member initialized
          m(memberVal),           // Member object initialized
          name(nameArg),          // string initialized
          age(ageArg)             // int initialized
    {
        cout << "AllInOne Constructor:" << endl;
        cout << "  constVal = " << constVal << endl;
        cout << "  refVal = " << refVal << endl;
        cout << "  name = " << name << endl;
        cout << "  age = " << age << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int refSource = 99;

    AllInOne obj(10, refSource, 55, "Alice", 25);

    return 0;
}
