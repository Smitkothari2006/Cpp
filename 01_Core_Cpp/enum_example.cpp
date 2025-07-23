// File: enum_example.cpp
#include <iostream>
using namespace std;

// Enum defines a set of named integral constants
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    Day today = Tuesday;

    cout << "Numeric value of Tuesday: " << today << endl;

    if (today == Tuesday) {
        cout << "It's Tuesday!" << endl;
    }

    return 0;
}
