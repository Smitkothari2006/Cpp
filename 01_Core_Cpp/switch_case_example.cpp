// File: switch_case_example.cpp
#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter day number (1-7): ";
    cin >> day;

    // Switch statement for day of the week
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day number!" << endl;
    }

    return 0;
}
